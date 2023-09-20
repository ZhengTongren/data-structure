#define _CRT_SECURE_NO_WARNINGS 1

#include "heap.h"


void test1()
{
	HP heap;
	HeapInit(&heap);

	int a[] = { 12, 2, 5, 84, 32, 14, 99, 56 };
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		HeapPush(&heap, a[i]);
	}
	HeapPrint(&heap);

	HeapPop(&heap);
	HeapPrint(&heap);

	HeapDestroy(&heap);
}


int main()
{
	test1();

	return 0;
}