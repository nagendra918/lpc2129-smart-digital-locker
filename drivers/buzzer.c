/* buzzer.c */
#include <lpc21xx.h>
#include "../config/pin_configuration.h"
#include "../common/defines.h"
void Buzzer_init(){
	
	IODIR(BUZZER_PORT)|=(1<<BUZZER);
}

void Buzzer_on(){
	
	IOSET(BUZZER_PORT)=(1<<BUZZER);
}

void Buzzer_off(){
	
	IOCLR(BUZZER_PORT)=(1<<BUZZER);
}

