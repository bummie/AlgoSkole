#include <stdio.h>
#include "Bubblesort.h"
#include "SelectionSort.h"

int main(void)
{
	int iArraySize = 10;
	int iaNumbers[] = {10, 3, 6, 4, 2, 5, 4, 3, 11, 1};
	
	// Print pre-result
	for(int i = 0; i < iArraySize; i++)
	{
		printf("%d ", iaNumbers[i]);
	}
	printf("\n");
	
	//Bubblesort(iaNumbers, iArraySize);
	SelectionSort(iaNumbers, iArraySize);
	
	// Print result
	for(int i = 0; i < iArraySize; i++)
	{
		printf("%d ", iaNumbers[i]);
	}
	printf("\n");
	
	return 0;
}
