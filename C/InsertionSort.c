#include <stdio.h>

void InsertionSort(int* iArray, int iArraySize)
{
	if(iArray == NULL){printf("Array is null"); return;}
	
	for(int i = 1; i < iArraySize; i++)
	{
		for(int x = i; x > 0; x--)
		{
			if(iArray[x] < iArray[x-1])
				swap(&iArray[x], &iArray[x-1]);
		}				
	}
}
