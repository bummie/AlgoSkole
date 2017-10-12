// Sebastian S. Berge 2017

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE !0
#define FALSE 0

void Bubblesort(int* iaArray, int iLength);
void swap(int* a, int* b);


void Bubblesort(int* iaArray, int iLength)
{	
	int swapped = TRUE;

	while(swapped)
	{
		swapped = FALSE;
		for(int i = 1; i < iLength; i++)
		{
			if(iaArray[i-1] > iaArray[i])
			{
				swap(&iaArray[i-1], &iaArray[i]); 	
				swapped = TRUE;
			}
		}				
	}
}

void swap(int* a, int* b)
{
	
	int swap = *a;
	*a = *b;
	*b = swap;
}
