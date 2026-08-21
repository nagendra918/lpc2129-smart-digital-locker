/* switch.c */
#include <lpc21xx.h>
#include "../config/pin_configuration.h"
#include "../common/defines.h"
#include "switch.h"
u32 Read_switch(void){
	
	if((IOPIN(SWITCH_PORT)>>SWITCH)&1)
		return 1;
	else
		return 0;
	
}
