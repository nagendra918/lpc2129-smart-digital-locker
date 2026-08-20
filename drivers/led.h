/* led.h */
#ifndef __LED_H
#define __LED_H

#include "../common/types.h"

void Led_init(void);
void Led_on(u32 led);
void Led_off(u32 led);
void Led_toggle(u32 led);
void Led_Alloff(void);

#endif
