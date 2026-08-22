//seven_segment.c
#include "../common/types.h"
#include "../config/pin_configuration.h"
#include <lpc21xx.h>
#include "../common/defines.h"
/* common anode seven segment lookup table */
u8 segmentLUT[4]={0xC0,0xF9,0xA4,0xB0};

void Seven_segment_init(void){
	
		IODIR(_7_SEGMENT_PORT)|=(0XFF<<_7_SEGMENT_DATA);
}

void display_num(u8 num){
	
	IOPIN(_7_SEGMENT_PORT)=((IOPIN(_7_SEGMENT_PORT)&~(0xFF<<_7_SEGMENT_DATA))|(segmentLUT[num]<<_7_SEGMENT_DATA));
}
