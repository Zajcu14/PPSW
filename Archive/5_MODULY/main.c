#include "led.h"
#include "keyboard.h"


void Delay(int iMiliSeconds){
	int iDelayCounter;

	for(iDelayCounter=0;iDelayCounter<5*1063*iMiliSeconds;iDelayCounter++){}
}


int main(){
	
	LedInit();
	KeyboardInit();
  
	while(1){
		
		switch(eKeyboardRead()){
         case BUTTON_1:
				       LedStepRight();
			         break;
         case BUTTON_2:
               LedStepLeft();
				       break;
				 default:
					     break;
		}
		Delay(100);

	}
	
}