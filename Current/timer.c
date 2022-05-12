#include <LPC21xx.H>
#include "timer.h"

#define TIMER0_en 0x1
#define TIMER0_rst 0x3

#define MATCH0_rst 0x2
#define MATCH0_ir 0x1

#define IR_FLAG0 0x1

void InitTimer0(void){
	T0TCR=TIMER0_en;
}


void WaitOnTimer0(unsigned int uiTime){
	T0TCR=TIMER0_rst;
	T0TCR=TIMER0_en;
	while( T0TC != (15000 * uiTime)){};
}

void InitTimer0Match0(unsigned int iDelayTime){
  T0MR0 = 15*iDelayTime;
	T0MCR = T0MCR | (MATCH0_ir | MATCH0_rst);
	T0TCR=TIMER0_rst;
	InitTimer0();
}

void WaitOnTimer0Match0(){
	while( T0IR != 1 ){};
	T0IR = (T0IR | IR_FLAG0);	
}