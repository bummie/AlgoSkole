#include <stdio.h>
#include "Bubblesort.h"
#include "SelectionSort.h"
#include "MergeSort.h"
#include "Timer.h"

int main(int iArgc, char* apszArgv[])
{

	if(iArgc < 2)
	{
		printf("Correct usage: ./Testing <Sorttype>\n");
		return 1;
	}
	
	char* sorttype = apszArgv[1];
	
	int iArraySize = 10;
	int iaNumbers[] = {10, 3, 6, 4, 2, 5, 4, 3, 11, 1};
	
	// Print pre-result
	for(int i = 0; i < iArraySize; i++)
	{
		printf("%d ", iaNumbers[i]);
	}
	printf("\n");
	unsigned long timeStart, timeEnd;
	
	if(strcmp(sorttype, "Selection") == 0)
	{
		printf("Selectionsorting\n");
		timeStart = GetTime();
		SelectionSort(iaNumbers, iArraySize);
		timeEnd = GetTime();
		printTime(timeStart, timeEnd);
	}
	
	else if(strcmp(sorttype, "Bubble") == 0)
	{	
		printf("Bubblesorting\n");
		timeStart = GetTime();
		Bubblesort(iaNumbers, iArraySize);
		timeEnd = GetTime();
		printTime(timeStart, timeEnd);
	}
	
	else if(strcmp(sorttype, "Merge") == 0)
	{
		printf("Mergesorting\n");
		timeStart = GetTime();
		MergeSort(iaNumbers, iArraySize);
		timeEnd = GetTime();
		printTime(timeStart, timeEnd);
	}
	
	// Print result
	for(int i = 0; i < iArraySize; i++)
	{
		printf("%d ", iaNumbers[i]);
	}
	printf("\n");
	
	return 0;
}
