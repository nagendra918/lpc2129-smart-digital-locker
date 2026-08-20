/* delay.c */
#include "types.h"

void delay_sec(u32 dly){
	
	for(dly*=12000000;dly>0;dly--);
}

void delay_ms(u32 dly){
	
	for(dly*=12000;dly>0;dly--);
}

void delay_us(u32 dly){
	
	for(dly*=12;dly>0;dly--);
}

