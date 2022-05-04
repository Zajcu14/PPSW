#include "string.h"

#define NULL '\0'
#define STRING_LENGTH 254


void CopyString(char pcSource[], char pcDestination[]){

    char cCharacterCounter;

    for(cCharacterCounter=0;pcSource[cCharacterCounter]!=NULL;cCharacterCounter++)
    {
        pcDestination[cCharacterCounter]=pcSource[cCharacterCounter];
    }
    pcDestination[cCharacterCounter]=NULL;
}

enum CompResult eCompareString(char pcStr1[], char pcStr2[]){

    char cCharacterCounter;

    for(cCharacterCounter=0;pcStr1[cCharacterCounter]==pcStr2[cCharacterCounter];cCharacterCounter++)
    {
        if(pcStr1[cCharacterCounter]==NULL){
            return EQUAL;
        }
    }
    return DIFFERENT;
}

void AppendString(char pcSourceStr[],char pcDestinationStr[]){

    char cCharacterCounter;

    for(cCharacterCounter=0;pcDestinationStr[cCharacterCounter]!=NULL;cCharacterCounter++){
    }
    CopyString(pcSourceStr,pcDestinationStr+cCharacterCounter);
}

void ReplaceCharactersInString(char pcString[],char cOldChar,char cNewChar){

    char cCharacterCounter;

    for(cCharacterCounter=0;pcString[cCharacterCounter]!=NULL;cCharacterCounter++)
    {
        if(pcString[cCharacterCounter]==cOldChar){
            pcString[cCharacterCounter]=cNewChar;
        }
    }
}



