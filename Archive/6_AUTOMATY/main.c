#include "led.h"
#include "keyboard.h"

void Delay(int iMiliSeconds){
	int iDelayCounter;

	for(iDelayCounter=0;iDelayCounter<5*1063*iMiliSeconds;iDelayCounter++){}
}

enum State{STATE0, STATE1, STATE2, STATE3, STATE4, STATE5};
enum State eState = STATE0;

enum LedState{LED_LEFT, LED_RIGHT};
enum LedState eLedState = LED_LEFT;

enum MoveDirection{LEFT_MOVE, RIGHT_MOVE, STOP_MOVE};
enum MoveDirection eDirection = LEFT_MOVE;

enum Action{MOVE, STOP};
enum Action eAction = STOP;

/*enum MovingDirectionState{LEFT_MOVE, RIGHT_MOVE, STOP_MOVE};
enum MovingDirectionState MotionDirection = STOP_MOVE;*/

int iStepCounter=0;

int main(){
	
  LedInit();
	KeyboardInit();
	
	while(1){
		
		//Cwiczenie 1
		/*switch(eLedState){
			case LED_LEFT:
			   eLedState = LED_RIGHT;
		     LedStepLeft();
			   break;
			case LED_RIGHT:
			   eLedState = LED_LEFT;
		     LedStepRight();
			   break;
    }
		Delay(1000);*/
		
		//Cwiczenie 2
		/*switch(eState){
			case STATE0:
			   eState = STATE1;
			   LedStepLeft();
			   break;
			case STATE1:
			   eState = STATE2;
			   LedStepLeft();
			   break;
			case STATE2:
			   eState = STATE3;
			   LedStepLeft();
			   break;
			case STATE3:
			   eState = STATE4;
			   LedStepRight();
			   break;
			case STATE4:
			   eState = STATE5;
			   LedStepRight();
			   break;
			case STATE5:
			   eState = STATE0;
			   LedStepRight();
			   break;
    }
		Delay(2000);*/
		
		
		
		//Cwiczenie 3
		/*switch(eDirection){
			case LEFT_MOVE:
				if(iStepCounter == 3){
					eLedState = LED_RIGHT;
					iStepCounter=0;
				}else{
					eLedState = LED_LEFT;
					LedStepLeft();
					iStepCounter++;
				}
				
			break;
			case RIGHT_MOVE:
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
		/*switch(Action){
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
		switch(eDirection){
			 case STOP_MOVE:
				  if(eKeyboardRead()==BUTTON_0){
					   eDirection = LEFT_MOVE;
				  }else if(eKeyboardRead()==BUTTON_2){
					   eDirection = RIGHT_MOVE;
				  }else{
					   eDirection = STOP_MOVE;
				  }
			    break;
			 case LEFT_MOVE:
				  LedStepLeft();
				  if(eKeyboardRead()==BUTTON_1){
				     eDirection = STOP_MOVE;
				  }else{
					   eDirection = LEFT_MOVE;	
				  }
			    break;
			case RIGHT_MOVE:
				  LedStepRight();
				  if(eKeyboardRead()==BUTTON_1){
				     eDirection = STOP_MOVE;
				  }else{
					   eDirection = RIGHT_MOVE;	
				  }
			    break;
				
		}
		Delay(100);
		
		
		
		
  }

}