#include <stdio.h>
#include <string.h>

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
	
	// Kopiere data fra array til buffer
	int iBuffer[length];
	memcpy(iBuffer, iArray, length);
	
	mergesort(iArray, 0, length - 1, iBuffer);
}

void mergesort(int* iArray, int low, int high, int* iBuffer)
{
	int middle = low + (high - low) / 2;
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
	
	// TODO: Fikse sorteringsretning
   for (int k = low; k <= high; k++)
   {
        if (i > middle) 
        {
            //done with left half, just copy over the right
            iArray[k] = iBuffer[j++];
        } 
        else if (j > high)
        {
            //done with right half, just copy over the left
            iArray[k] = iBuffer[i++];
        }
        else if (iBuffer[j] > iBuffer[i])
        {
            iArray[k] = iBuffer[j++];
        } 
        else 
        {
            iArray[k] = iBuffer[i++];
        }
    }
}
