#include <LPC21xx.H>
#include "servo.h"
#include "led.h"
#include "timer_interrupts.h"

#define DET_bm (1<<10)


struct Servo sServo;

void DetectorInit(){
	
   IO1DIR=IO1DIR|(DET_bm);	
}

enum DetectorState eReadDetector(){
	if((IO1PIN^(DET_bm)) == 1){
		return ACTIVE;
	}
	return INACTIVE;
}

void Automat(void){
	
		switch(sServo.eState){
			case IDLE:
				if(sServo.uiCurrentPosition==sServo.uiDesiredPosition){
					sServo.eState = IDLE;
				}else {
					sServo.eState = IN_PROGRESS;
				}
			  break;
			case IN_PROGRESS:
				if(sServo.uiCurrentPosition<sServo.uiDesiredPosition){
				   LedStepRight();
					 sServo.uiCurrentPosition++;
				}else if(sServo.uiCurrentPosition>sServo.uiDesiredPosition){
					 LedStepLeft();
					 sServo.uiCurrentPosition--;				
				}else{
					 	sServo.eState = IDLE;;			
				}
			  break;
			case CALLIB:
				if(eReadDetector()== INACTIVE){
				   sServo.eState = CALLIB;
           LedStepRight();
				}else{
					 sServo.eState = IDLE;
					 sServo.uiCurrentPosition = 0;
					 sServo.uiDesiredPosition = 0;
				}
				
			  break;
				
		}

}

void ServoInit(unsigned int uiServoFrequency){
    LedInit();
	  sServo.eState = CALLIB; 
	  Timer1Interrupts_Init((1000000/uiServoFrequency),&Automat);
}

void ServoCallib(void){
    sServo.eState = CALLIB; 
}

void ServoGoTo(unsigned int uiPosition){
    sServo.uiDesiredPosition = uiPosition;
}