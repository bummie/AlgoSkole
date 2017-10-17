#ifndef Timer_H_
#define Timer_H_


#include <stdio.h>
#include <sys/time.h>

unsigned long GetTime();

void printTime(unsigned long timeStart, unsigned long timeEnd);

#endif
