#include "led.h"
#include "keyboard.h"


void Delay(int iMiliSeconds){
	int i;

	for(i=0;i<1063*iMiliSeconds;i++){}
}

// 1 sekunda -> 1594000

int main(){
	IO1SET=0x800000;
	LedInit();
	
	IO0DIR=IO0DIR|BUT0_bm;
	IO0SET=IO0DIR|BUT0_bm;
	
	while(1){


		/*IO1SET=IO1SET|LED0_bm;
		for(i=0;i<1594000;i++){}
		IO1CLR=IO1CLR|LED0_bm;
		for(i=0;i<1594000;i++){}*/


		/*Cwiczenie 8
		IO1SET=IO1SET|LED0_bm;
		Delay(50);
		IO1CLR=IO1CLR|LED0_bm;
		Delay(50);
		*/

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

		/*Cwiczenie 12
		LedOn(0);
		Delay(250);


		LedOn(1);
		Delay(250);


		LedOn(2);
		Delay(250);


		LedOn(3);
		Delay(250);*/
		
		//Cwiczenie 16
		switch(IO0SET^BUT0_bm){
			 case 1:
				       LedOn(1);
			         IO0CLR=IO0CLR|BUT0_bm;
               break;
			 case 2:
               LedOn(4);
			         IO0SET=IO0SET|BUT0_bm;
			         break;
		}
		Delay(1000);
			
			

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

		/*Cwiczenie 22
		char cStepCounter;
		for(cStepCounter=0;cStepCounter<9;cStepCounter++){
            LedStep(RIGHT);
		}
		for(cStepCounter=0;cStepCounter<9;cStepCounter++){
            LedStep(LEFT);
		}*/



	}

}
