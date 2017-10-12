#include <stdio.h>

void SelectionSort(int* iArray, int iArraySize)
{
	if(iArray == NULL){printf("Array is null"); return;}
	
	int iSortedIndex = 0;
	int iSelectedIndex = 0;
	
	while(iArraySize > iSortedIndex)
	{
		iSelectedIndex = iSortedIndex;
		for(int i = iSortedIndex; i < iArraySize; i++)
		{
			if(iArray[i] < iArray[iSelectedIndex])
				iSelectedIndex = i;
		}

		swap(&iArray[iSortedIndex], &iArray[iSelectedIndex]);
		iSortedIndex++;
	}
}
