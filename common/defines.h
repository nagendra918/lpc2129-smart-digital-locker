/* defines.h */
#ifndef __DEFINES_H
#define __DEFINES_H

#define IODIR_(x) IO##x##DIR
#define IODIR(x)  IODIR_(x)

#define IOSET_(x) IO##x##SET
#define IOSET(x)  IOSET_(x)

#define IOCLR_(x) IO##x##CLR
#define IOCLR(x)  IOCLR_(x)

#define IOPIN_(x) IO##x##PIN
#define IOPIN(x)  IOPIN_(x)

#endif
