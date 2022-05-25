#include "string.h"

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
	
void TestOf_CopyString(void){
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
	
int main(){
	
	
	
}