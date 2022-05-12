#include <LPC21xx.H>
#include "led.h"
#include "timer_interrupts.h"



int iCheckout = 0;



int main (){
	unsigned int iMainLoopCtr;
	LedInit();
	Timer1Interrupts_Init(250000);

	while(1){
	 	iMainLoopCtr++;
	}
}