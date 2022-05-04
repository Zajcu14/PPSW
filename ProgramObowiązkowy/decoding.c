#include "string.h"
#include "conversion.h"

#define MAX_TOKEN_NR 3
#define NULL '\0'
#define MAX_KEYWORD_STRING_LTH 10
#define MAX_KEYWORD_NR 3

typedef enum TokenType {KEYWORD, NUMBER, STRING};

typedef enum KeywordCode { LD, ST, RST};

typedef union TokenValue
{
   enum KeywordCode eKeyword;
   unsigned int uiNumber;
   char * pcString;
};

typedef struct Token
{
   enum TokenType eType;
   union TokenValue uValue;
};

struct Token asToken[MAX_TOKEN_NR];

unsigned char ucTokenNr;

typedef struct Keyword
{
   enum KeywordCode eCode;
   char cString[MAX_KEYWORD_STRING_LTH + 1];
};

struct Keyword asKeywordList[MAX_KEYWORD_NR]=
{
    {RST,"reset"},
    {LD, "load" },
    {ST, "store"}
};

enum Result eStringToKeyword (char pcStr[],enum KeywordCode* peKeywordCode){
    char cLoopCounter;

    for(cLoopCounter=0;cLoopCounter<3;cLoopCounter++){
        if(eCompareString(pcStr,asKeywordList[cLoopCounter].cString)== EQUAL){
           *peKeywordCode = asKeywordList[cLoopCounter].eCode;
           return OK;
        }
    }
    return ERROR;
}

char ucFindTokensInString (char* pcString){
    enum State{TOKEN, DELIMETER};
    enum State eState = DELIMETER;
    unsigned char ucCharacterCounter;
    char cCurrentCharacter;

    for(ucCharacterCounter=0;;ucCharacterCounter++){
        cCurrentCharacter=pcString[ucCharacterCounter];
			
        switch(eState){
               case TOKEN:
                      if(cCurrentCharacter==' '){
                         eState = DELIMETER;
                      }else if(cCurrentCharacter==NULL){
                         return ucTokenNr;
                      }else{
                         eState = TOKEN;
                      }
                      break;
               case DELIMETER:
                      if(cCurrentCharacter==NULL){
                        return ucTokenNr;
                      }else if(ucTokenNr==3){
												return ucTokenNr;
											}
											else if(cCurrentCharacter!=' '){
                        eState = TOKEN;
                        asToken[ucTokenNr].uValue.pcString=pcString+ucCharacterCounter;
                        ucTokenNr = ucTokenNr + 1;
                      }else{
                        eState = DELIMETER;
                      }
                      break;
        }
    }

}

void DecodeTokens(void){
	char cTokenCounter;

	for(cTokenCounter=0;cTokenCounter<ucTokenNr;cTokenCounter++){
			struct Token* sCurrentToken = &asToken[cTokenCounter];

			if(eStringToKeyword(sCurrentToken->uValue.pcString,&(sCurrentToken->uValue.eKeyword)) == OK){
					sCurrentToken->eType = KEYWORD;
			}
      else if(eHexStringToUInt(sCurrentToken->uValue.pcString,&(sCurrentToken->uValue.uiNumber)) == OK){
					sCurrentToken->eType = NUMBER;
			}
			else{
					sCurrentToken->eType = STRING;
			}
	}
}

void DecodeMsg(char *pcString){
	   ucFindTokensInString(pcString);
	   ReplaceCharactersInString(pcString,' ',NULL);
	   DecodeTokens();
}


int main(){

char asEmptyString[]="";
char asDelBefore[]=" 0x20 String";
char asMultiDel[]="0x20   reset load";
char *pcTest=asDelBefore;

DecodeMsg(asMultiDel);


	pcTest=pcTest;
	pcTest=pcTest;
	pcTest=pcTest;
}


