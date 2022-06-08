#include "led.h"
#include "keyboard.h"

void Delay(int iMiliSeconds){
	int iDelayCounter;

	for(iDelayCounter=0;iDelayCounter<5*1063*iMiliSeconds;iDelayCounter++){}
}

enum MoveDirection{LEFT_MOVE, RIGHT_MOVE, STOP, BLINK, WAIT};
enum MoveDirection eDirection = LEFT_MOVE;

int main(){
	char cBlinkCounter=0;
	char cBlinkDelay=0;
	
  LedInit();
	KeyboardInit();
	
	while(1){
		
		switch(eDirection){
			 case STOP:
				  if(eKeyboardRead()==BUTTON_0){
					   eDirection = LEFT_MOVE;
				  }else if(eKeyboardRead()==BUTTON_2){
					   eDirection = RIGHT_MOVE;
				  }else{
					   eDirection = STOP;
				  }
			    break;
			 case LEFT_MOVE:
				  if(eKeyboardRead()==BUTTON_1){
						 LedStepLeft();
				     eDirection = STOP;
				  }else if(eKeyboardRead()==BUTTON_3){
					   LedStepLeft();
				     eDirection = BLINK;
				  }else{
						 LedStepLeft();
					   eDirection = LEFT_MOVE;	
				  }
			    break;
			case RIGHT_MOVE:
				  if(eKeyboardRead()==BUTTON_1){
						 LedStepRight();
				     eDirection = STOP;
				  }else{
						 LedStepRight();
					   eDirection = RIGHT_MOVE;	
				  }
			    break;
			case BLINK:
				  if(cBlinkCounter<10){
						 if(cBlinkDelay==0){ 
							 LedInit();
							 cBlinkDelay = 1;
						 }else{
							 LedOn(4);
							 cBlinkDelay = 0;
						 }
						 eDirection = BLINK;
						 cBlinkCounter++;
				  }else{
						 eDirection = WAIT;
						 cBlinkCounter=0;
				  }
			    break;
			case WAIT:
				  if(eKeyboardRead()==BUTTON_0){
						 eDirection = RIGHT_MOVE;
				  }else{
						 eDirection = WAIT;
				  }
			    break;
		}
		Delay(100);
  }
}