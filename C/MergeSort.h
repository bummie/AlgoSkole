#ifndef Mergesort_H_
#define Mergesort_H_

#include <stdio.h>

void MergeSort(int* iArray, int length);

void mergesort(int* iArray, int low, int high, int* iBuffer);

void merge(int* iArray, int low, int middle, int high, int* iBuffer);
#endif
