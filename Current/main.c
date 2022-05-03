#include <LPC21xx.H>

#define LED0_bm (1<16)
#define LED1_bm (1<17)
#define LED2_bm (1<18)
#define LED3_bm (1<19)

#define BUT0_bm (1<4) 
#define BUT2_bm (1<5)
#define BUT1_bm (1<6)
#define BUT3_bm (1<7)


enum StepDirection {LEFT, RIGHT};
enum KeyBoardsState {RELASED, BUTTON_0, BUTTON_1, BUTTON_2, BUTTON_3};

void LedInit(){

	IO1DIR=IO1DIR|(LED0_bm|LED1_bm|LED2_bm|LED3_bm);
	IO1CLR=(LED0_bm|LED1_bm|LED2_bm|LED3_bm);
	IO1SET=LED0_bm;
}

void LedOn(unsigned char ucLedIndeks){

	IO1CLR=(LED0_bm|LED1_bm|LED2_bm|LED3_bm);
	switch(ucLedIndeks)
	{
		case 0:
			IO1SET=LED0_bm;
		  break;
		case 1:
			IO1SET=LED1_bm;
		  break;
	  case 2:
			IO1SET=LED2_bm;
		  break;
		case 3:
			IO1SET=LED3_bm;
		  break;
	}
}

void LedStep(enum StepDirection eDirection ){
    static unsigned int uiLedState=0;

    switch(eDirection){
      case LEFT:
          uiLedState = (uiLedState + 1)%4;
          break;
      case RIGTH:
          uiLedState = (uiLedState - 1)%4;
          break;
    }
    LedOn(uiLedState);
}

void LedStepLeft(void){
     LedStep(LEFT);
}

void LedStepRight(void){
     LedStep(RIGHT);
}

enum KeyBoardsState eKeyboardRead(){
	if((IO0PIN^BUT0_bm)==0){
		 return BUTTON_0;
	}else if((IO0PIN^BUT1_bm)==0){
		 return BUTTON_1;
	}else if((IO0PIN^BUT2_bm)==0){
	     return BUTTON_2;
	}else if((IO0PIN^BUT3_bm)==0){
	     return BUTTON_3;
	}else{
	     return RELEASED;
	}
}

void KeyboardInit(){
	IO0DIR=IO0PIN|(BUT0_bm|BUT1_bm|BUT2_bm|BUT3_bm);
}

void Delay(int iMiliSeconds){
	int i;

	for(i=0;i<1063*iMiliSeconds;i++){}
}

// 1 sekunda -> 1594000

int main(){
	
	LedInit();

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
		
		/*Cwiczenie 24
		switch(eKeyboardRead()){
         case BUTTON_1:
               LedStep(RIGHT);
			         break;
         case BUTTON_2:
               LedStep(LEFT);
				       break;
				 case RELEASED:
				       breal;
		}*/

	}

}
