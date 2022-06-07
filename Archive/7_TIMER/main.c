#include "led.h"
#include "keyboard.h"
#include "timer.h"

int main(){
  LedInit();
	InitTimer0Match0(250000);
	
	while(1){
		LedStepLeft();
		WaitOnTimer0Match0();
		
	}
}