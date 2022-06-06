#include "led.h"
#include "keyboard.h"
#include "timer_interrupts.h"



int main (){
	unsigned int iMainLoopCtr;
	
	LedInit();
	Timer1Interrupts_Init(2500000,&LedStepLeft);
  
	
	while(1){
		
	}
}