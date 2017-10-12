// Sebastian S. Berge 2017

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE !0
#define FALSE 0

void Bubblesort(int* iaArray, int iLength);
void swap(int* a, int* b);

int swapped = TRUE;

void Bubblesort(int* iaArray, int iLength)
{	
	while(swapped)
	{
		swapped = FALSE;
		for(int i = 1; i < iLength; i++)
		{
			if(iaArray[i-1] > iaArray[i])
				swap(&iaArray[i-1], &iaArray[i]); 	
		}				
	}
}

void swap(int* a, int* b)
{
	swapped = TRUE;
	int swap = *a;
	*a = *b;
	*b = swap;
}
