/* led.c */
#include <lpc21xx.h>
#include "../common/defines.h"
#include "../config/pin_configuration.h"
#include "led.h"

void Led_init(){
	
	IODIR(LED_PORT)|=(0x0F<<LEDs);
}
void Led_on(u32 led){
		
	IOSET(LED_PORT)=(1<<led);
}

void Led_off(u32 led){
		
	IOCLR(LED_PORT)=(1<<led);
}

void Led_Alloff(){
	
	IOPIN(LED_PORT)&=~(0x0F<<LEDs);
}

void Led_toggle(u32 led){
	
	IOPIN(LED_PORT)^=(1<<led);
	
}

