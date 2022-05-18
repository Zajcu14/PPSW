#include "led.h"
#include "keyboard.h"


void Delay(int iMiliSeconds){
	int i;

	for(i=0;i<1063*iMiliSeconds;i++){}
}


enum LedState{LED_LEFT, LED_RIGHT};
enum LedState eLedState = LED_LEFT;

enum State{STATE0, STATE1,STATE2,STATE3,STATE4,STATE5};
enum State State = STATE0;

enum MovingState{MOVE, STOP};
enum MovingState Motion = STOP;

enum MovingDirectionState{LEFT_MOVE, RIGHT_MOVE, STOP_MOVE};
enum MovingDirectionState MotionDirection = STOP_MOVE;

int iStepCounter=0;

int main(){
  
	while(1){
		//Cwiczenie 1
		switch(eLedState){
			case LED_LEFT:
			eLedState = LED_RIGHT;
		  LedStepLeft();
			break;
			case LED_RIGHT:
			eLedState = LED_LEFT;
		  LedStepRight();
			break;
    }
		
		//Cwiczenie 2
		/*switch(State){
			case STATE0:
			State = STATE1;
			LedStepLeft();
			break;
			case STATE1:
			State = STATE2;
			LedStepLeft();
			break;
			case STATE2:
			State = STATE3;
			LedStepLeft();
			break;
			case STATE3:
			State = STATE4;
			LedStepRight();
			break;
			case STATE4:
			State = STATE5;
			LedStepRight();
			break;
			case STATE5:
			State = STATE0;
			LedStepRight();
			break;
    }
		Delay(2000);*/
		
		
		
		//Cwiczenie 3
		/*switch(eLedState){
			case LED_LEFT:
				if(iStepCounter == 3){
					eLedState = LED_RIGHT;
					iStepCounter=0;
				}else{
					eLedState = LED_LEFT;
					LedStepLeft();
					iStepCounter++;
				}
				
			break;
			case LED_RIGHT:
				if(iStepCounter == 3){
					eLedState = LED_LEFT;
					iStepCounter=0;
				}else{
					eLedState = LED_RIGHT;
					LedStepRight();
					iStepCounter++;
				}
			break;
    }
		Delay(1000);*/
		
		//Cwiczenie 4
		/*switch(Motion){
			case MOVE:
				if(iStepCounter == 3){
					Motion = STOP;
					iStepCounter=0;
				}else{
					Motion = MOVE;
					LedStepRight();
				}
				iStepCounter++;
			break;
			case STOP:
				if(eKeyboardRead()==BUTTON_0){
				   Motion = MOVE;
				}
			break;
		}*/
		
		//Cwiczenie 5
		/*switch(Motion){
			case MOVE:
				if(eKeyboardRead()==BUTTON_0){
					Motion = STOP;
				}else{
					Motion = MOVE;
					LedStepRight();
				}
			break;
			case STOP:
				if(eKeyboardRead()==BUTTON_1){
				   Motion = MOVE;
				}
			break;
		}*/
		
		//Cwiczenie 6
		/*switch(MotionDirection){
			case STOP_MOVE:
				if(eKeyboardRead()==BUTTON_0){
					MotionDirection = LEFT_MOVE;
				}else if(eKeyboardRead()==BUTTON_2){
					MotionDirection = RIGHT_MOVE;
				}
			break;
			case LEFT_MOVE:
				if(eKeyboardRead()==BUTTON_1){
				   MotionDirection = STOP_MOVE;
				}else{
					 MotionDirection = LEFT_MOVE;
           LedStepLeft();					
				}
			break;
			case RIGHT_MOVE:
				if(eKeyboardRead()==BUTTON_1){
				   MotionDirection = RIGHT_MOVE;
           LedStepRight();
				}
			break;
				
		}*/
		
		
		
		
  }

}