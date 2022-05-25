#include "conversion.h"

#define NULL '\0'
#define TETRADE_MASK 0xF
#define LAST_INDEX_HEX_STRING 5


void UIntToHexStr(unsigned int uiValue, char pcStr[]){
    char ucTetradeCounter;

    for(ucTetradeCounter=0;ucTetradeCounter<4;ucTetradeCounter++){
        if(((uiValue>>ucTetradeCounter*4)&TETRADE_MASK)<10){
             pcStr[LAST_INDEX_HEX_STRING-ucTetradeCounter]=((uiValue>>ucTetradeCounter*4)&TETRADE_MASK)+'0';
        }else{
             pcStr[LAST_INDEX_HEX_STRING-ucTetradeCounter]=((uiValue>>ucTetradeCounter*4)&TETRADE_MASK)+('A'-10);
        }
    }
    pcStr[0]='0';
    pcStr[1]='x';
    pcStr[LAST_INDEX_HEX_STRING+1]=NULL;
}

enum Result eHexStringToUInt(char pcStr[], unsigned int* puiValue){
     char ucCharacterCounter;
     char cCurrentCharacter;

     if(pcStr[0]!='0' || pcStr[1]!='x' || pcStr[2]==NULL ){
        return ERROR;
     }
     *puiValue=0;

     for(ucCharacterCounter=2;pcStr[ucCharacterCounter]!=NULL;ucCharacterCounter++){
        if(ucCharacterCounter>LAST_INDEX_HEX_STRING){
            return ERROR;
        }
        cCurrentCharacter=pcStr[ucCharacterCounter];
        if(cCurrentCharacter<='9'){
            *puiValue=*puiValue+((cCurrentCharacter-'0')<<4*(LAST_INDEX_HEX_STRING-ucCharacterCounter));
         }else{
            *puiValue=*puiValue+((cCurrentCharacter-('A'-10))<<4*(LAST_INDEX_HEX_STRING-ucCharacterCounter));
         }
     }
     *puiValue=*puiValue>>4*(LAST_INDEX_HEX_STRING-(ucCharacterCounter-1));
     return OK;
}

AppendUIntToString (unsigned int uiValue, char pcDestinationStr[]){
    unsigned char ucCharacterCounter;

    for(ucCharacterCounter=0;pcDestinationStr[ucCharacterCounter]!=NULL;ucCharacterCounter++){}
    UIntToHexStr(uiValue, pcDestinationStr+ucCharacterCounter);
}



