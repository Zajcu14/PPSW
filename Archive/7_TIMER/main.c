#include "led.h"
#include "keyboard.h"
#include "timer.h"



int iTimeCheck=0;

int main(){
	
	/*WaitOnTimer0(400000);
	iTimeCheck++;
	WaitOnTimer0(400000);
	iTimeCheck++;*/
	
	
  LedInit();
	
	
	while(1){
		
		LedStepLeft();
		WaitOnTimer0(399000);
		InitTimer0Match0(400000);
		WaitOnTimer0Match0();
	}
	

}