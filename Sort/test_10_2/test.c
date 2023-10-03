#define _CRT_SECURE_NO_WARNINGS 1

#include "sort.h"

int main()
{
	int a[] = { 10, 5, 5, 1, 1, 2, 6, 7, 8, 2, 46, 12, 9 };
	//InsertSort(a, sizeof(a) / sizeof(int));
	//ShellSort(a, sizeof(a) / sizeof(int));
	SelectSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));

	return 0;
}