#include "led.h"
#include "keyboard.h"


void Delay(int iMiliSeconds){
	int i;

	for(i=0;i<1063*iMiliSeconds;i++){}
}


int main(){
  
	while(1){
		
		
		/*IO1SET=IO1SET|LED0_bm;
		Delay(1000);
		IO1CLR=IO1CLR|LED0_bm;
		Delay(1000);*/


		//Cwiczenie 8
		/*IO1SET=IO1SET|LED0_bm;
		Delay(50);
		IO1CLR=IO1CLR|LED0_bm;
		Delay(50);*/
		

		/*Cwiczenie 10
		IO1SET=IO1SET|LED3_bm;
		Delay(50);
		IO1CLR=IO1CLR|LED3_bm;
		Delay(50);
		*/

		/*Cwiczenie 11
		IO1SET=IO1SET|LED0_bm;
		IO1SET=IO1SET|LED1_bm;
		IO1SET=IO1SET|LED2_bm;
		IO1SET=IO1SET|LED3_bm;
		*/

		
		
		//Cwiczenie 16
		
    /*switch(eKeyboardRead()){
			 case BUTTON_0:
               LedOn(1);
			         break;
			 default:
				       LedOn(0);
			         break;
		}
		Delay(500);*/

    /*Cwiczenie 19
		switch(eKeyboardRead()){
			 case BUTTON_0:
               LedOn(0);
			   break;
             case BUTTON_1:
               LedOn(1);
			   break;
             case BUTTON_2:
               LedOn(2);
			   break;
             case BUTTON_3:
               LedOn(3);
			   break;
			 case RELASED:
               LedOn(4);
			   break;
		}
		Delay(250);*/


		//Cwiczenie 22
		
		char cStepCounter;
		for(cStepCounter=0;cStepCounter<9;cStepCounter++){
            LedStepRight();
						Delay(2000);
		}
		for(cStepCounter=0;cStepCounter<9;cStepCounter++){
            LedStepLeft();
						Delay(2000);
		}
		
		/*Cwiczenie 24
		switch(eKeyboardRead()){
         case BUTTON_1:
				       LedStepRight();
			         break;
         case BUTTON_2:
               LedStepLeft();
				       break;
				 case RELEASED:
				       breal;
		}*/


	}
	

}