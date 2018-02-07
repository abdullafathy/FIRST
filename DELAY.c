#include "STD_TYPE.h"

u32 i;
u32 x;
void Delay_ms(u32 DelayValue){



	x=(DelayValue*(1000000)-(640*125))/(42*750);
	for(i=0;i<x;i++){
					asm("NOP");

	}
}



void Delay_us(u32 DelayValue){

	u32 i;

			x=((DelayValue-80)*(1000)-(640*125))/(42*125);
	for(i=0;i<x;i++){
					asm("NOP");

	}
}

