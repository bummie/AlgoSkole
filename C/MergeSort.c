#include <stdio.h>

void MergeSort(int* iArray, int length);
void mergesort(int* iArray, int low, int high, int* iBuffer);
void merge(int* iArray, int low, int middle, int high, int* iBuffer);

void MergeSort(int* iArray, int length)
{
	if(iArray == NULL)
	{
		printf("Array is NULL\n");
		return;
	}
	
	int* iBuffer = iArray;
	
	mergesort(iArray, 0, length - 1, iBuffer);
}

void mergesort(int* iArray, int low, int high, int* iBuffer)
{
	int middle = high / 2;
	if(low < high)
	{
		mergesort(iArray, low, middle, iBuffer);
		
		mergesort(iArray, middle + 1, high, iBuffer);
		
		merge(iArray, low, middle, high, iBuffer);
	}
}

void merge(int* iArray, int low, int middle, int high, int* iBuffer)
{
	for(int i = 0; i <= high; i++)
	{
		iBuffer[i] = iArray[i];
	}
	
	int i = low;
	int j = middle + 1;
	int k = low;
	
	while(i <= middle && j <= high)
	{
		if(iBuffer[i] < iBuffer[j])
		{
			iArray[k] = iBuffer[i];
			i++;
		}
		else
		{
			iArray[k] = iBuffer[j];
			j++;
		}
	}
	while(i <= middle)
	{
		iArray[k] = iBuffer[i];
		k++;
		i++;
	}	
}
