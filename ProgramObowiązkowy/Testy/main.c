#include "string.h"

void TestOf_CopyString(void){
	char acEmptyString[] = "";
	char acString[] = "TestKopiowania";
	char acResultString[254];

	printf("bCopyString\n\n ");
	printf ("Test 1 - ");
//  Kopiowanie null-stringa
	CopyString(acEmptyString,acResultString);
	if(eCompareString(acResultString,acEmptyString) == EQUAL) printf("OK\n"); else printf("Error\n");

	printf ("Test 2 - ");
//  Sprawdzenie kopiowania pustego stringa
	CopyString(acEmptyString,acResultString);
	if(eCompareString(acResultString,acEmptyString) == EQUAL) printf("OK\n"); else printf("Error\n");

	}

void TestOf_eCompareString(void){
	char acEmptyString[] = "";
	char acResultString[254];

	printf("bCopyString\n\n ");
	printf ("Test 1 - ");
// krótki opis, jaki jest cel testu nr 1 dac w komentarzu
// jakies przygotowania do testu1
	CopyString(acEmptyString,acResultString);
	if(1) printf("OK\n"); else printf("Error\n");

	printf ("Test 2 - ");
// krótki opis jaki jest cel testu nr 1
// jakies przygotowania do testu2
	if(1) printf("OK\n"); else printf("Error\n");

}

void TestOf_AppendString(void){
	char acEmptyString[] = "";
	char acResultString[254];

	printf("bCopyString\n\n ");
	printf ("Test 1 - ");
// krótki opis, jaki jest cel testu nr 1 dac w komentarzu
// jakies przygotowania do testu1
	CopyString(acEmptyString,acResultString);
	if(1) printf("OK\n"); else printf("Error\n");

	printf ("Test 2 - ");
// krótki opis jaki jest cel testu nr 1
// jakies przygotowania do testu2
	if(1) printf("OK\n"); else printf("Error\n");

}

void TestOf_ReplaceCharactersInString(void){
	char acEmptyString[] = "";
	char acResultString[254];

	printf("bCopyString\n\n ");
	printf ("Test 1 - ");
// krótki opis, jaki jest cel testu nr 1 dac w komentarzu
// jakies przygotowania do testu1
	CopyString(acEmptyString,acResultString);
	if(1) printf("OK\n"); else printf("Error\n");

	printf ("Test 2 - ");
// krótki opis jaki jest cel testu nr 1
// jakies przygotowania do testu2
	if(1) printf("OK\n"); else printf("Error\n");

}

void TestOf_UIntToHexStr(void){

	printf("bHexStringToUInt\n\n ");
	printf ("Test 1 - ");
// krótki opis, jaki jest cel testu nr 1 dac w komentarzu
// jakies przygotowania do testu1
	if(1){
		printf("OK\n");
	}else{
		printf("Error\n");
	}
	printf ("Test 2 - ");
// krótki opis jaki jest cel testu nr 1
// jakies przygotowania do testu2
	if(1){
			printf("OK\n");
		}else{
			printf("Error\n");
		}

}

void TestOf_eHexStringToUInt(void){

	printf("bHexStringToUInt\n\n ");
	printf ("Test 1 - ");
// krótki opis, jaki jest cel testu nr 1 dac w komentarzu
// jakies przygotowania do testu1
	if(1){
		printf("OK\n");
	}else{
		printf("Error\n");
	}
	printf ("Test 2 - ");
// krótki opis jaki jest cel testu nr 1
// jakies przygotowania do testu2
	if(1){
			printf("OK\n");
		}else{
			printf("Error\n");
		}

}

void TestOf_AppendUIntToString(void){

	printf("bHexStringToUInt\n\n ");
	printf ("Test 1 - ");
// krótki opis, jaki jest cel testu nr 1 dac w komentarzu
// jakies przygotowania do testu1
	if(1){
		printf("OK\n");
	}else{
		printf("Error\n");
	}
	printf ("Test 2 - ");
// krótki opis jaki jest cel testu nr 1
// jakies przygotowania do testu2
	if(1){
			printf("OK\n");
		}else{
			printf("Error\n");
		}

}

void main(void){
    char acEmptyString[] = "";
	char acString[] = "TestKopiowania";
	char acResultString[254];

	printf("%s\n",acEmptyString);
	printf("%s\n",acString);




}
