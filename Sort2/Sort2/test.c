#include "Sort.h"

int main()
{
	int a[] = { 10, 2, 5, 6, 2, 8, 9, 5, 4 };
	int sz = sizeof(a) / sizeof(int);

	CountSort(a, sz);
	PrintArray(a, sz);
	return 0;
}