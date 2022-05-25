#include "led.h"
#include "keyboard.h"
#include "timer.h"

void Delay(int iMiliSeconds){
	int i;

	for(i=0;i<1063*iMiliSeconds;i++){}
}

int iTimerCheck=0;

int main(){
  
	
	InitTimer0();
	WaitOnTimer0(400);
	iTimerCheck++;
	WaitOnTimer0(400);
	iTimerCheck++;
	
	
	
	while(1){
		
	}
	

}