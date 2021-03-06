#ifndef __TIMER_H
#define __TIMER_H

#include <3ds.h>
//#include <stdbool.h>

#define PULSE_EVENT 2

/* sets upper 32 bits of timer to kernel_callback_int */
bool set_timer(Handle timer, u32 kernel_callback_int, u32 carry);

#endif /* __TIMER_H */
