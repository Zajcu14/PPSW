#include "led.h"
#include "keyboard.h"
#include "timer_interrupts.h"
#include "servo.h"


int main (){
	unsigned int iMainLoopCtr;
	//Timer
	LedInit();
	Timer1Interrupts_Init(2500000,&LedStepLeft);
  
	ServoInit(1000);
	
	while(1){
		
	 	/*switch(eKeyboardRead()){
		   case BUTTON_0:
          ServoCallib();
			    break;
			 case BUTTON_1:
          ServoGoTo(12);
			    break;
			 case BUTTON_2:
          ServoGoTo(24);
			    break;
			 case BUTTON_3:
          ServoGoTo(36);
			    break;
			
		}*/
		
	}
}