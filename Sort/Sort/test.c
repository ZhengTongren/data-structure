#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"


int main()
{
	int a[] = { 10, 2, 8, 4, 3, 6, 5, 11, 20, 13, 6 };
	int sz = sizeof(a) / sizeof(int);

	//InsertSort(a, sz);
	//ShellSort(a, sz);
	//SelectSort(a, sz);
	//BubbleSort(a, sz);
	HeapSort(a, sz);
	PrintArray(a, sz);

	return 0;
}