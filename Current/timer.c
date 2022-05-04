#include <LPC21xx.H>
#include "timer.h"

void InitTimer0(void){
	T0TCR=0x1;
}


void WaitOnTimer0(unsigned int uiTime){
	T0TCR=0x3;
	T0TCR=0x1;
//	while(T0TC != uiTime){}
}