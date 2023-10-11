#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"


int main()
{
	int a[] = { 9, 10, 2, 8, 4, 3, 6, 5, 11, 20, 13, 6, 10 };
	int sz = sizeof(a) / sizeof(int);

	//InsertSort(a, sz);
	//ShellSort(a, sz);
	//SelectSort(a, sz);
	//BubbleSort(a, sz);
	//HeapSort(a, sz);

	//PartSort2(a, 0, sz - 1);
	//PartSort3(a, 0, sz - 1);
	//QuickSort1(a, 0, sz - 1);
	//QuickSortNonR(a, 0, sz - 1);
	MergeSort(a, sz);
	PrintArray(a, sz);

	return 0;
}