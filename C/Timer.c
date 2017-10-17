#include <stdio.h>
#include <sys/time.h>

void printTime(unsigned long timeStart, unsigned long timeEnd);

unsigned long GetTime() {
  struct timeval tv;
  gettimeofday(&tv,NULL);
  return tv.tv_sec*(unsigned long)1000000+tv.tv_usec;
}

void printTime(unsigned long timeStart, unsigned long timeEnd)
{
	printf("Elapsed time: %lu ms\n", (timeEnd - timeStart)/1000);
}
