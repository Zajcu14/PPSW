enum Result { OK, ERROR };

void UIntToHexStr(unsigned int uiValue, char pcStr[]);
enum Result eHexStringToUInt(char pcStr[], unsigned int* puiValue);
AppendUIntToString (unsigned int uiValue, char pcDestinationStr[]);

