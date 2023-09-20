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

	/*HeapPop(&heap);
	HeapPrint(&heap);*/

	while (!HeapEmpty(&heap))
	{
		printf("%d ", HeapTop(&heap));
		HeapPop(&heap);
	}

	HeapDestroy(&heap);
}


void test2()
{
	int a[] = { 12, 2, 5, 84, 32, 14, 99, 56 };
	HeapSort(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}
}


void test3()
{
	//CreateNData();
	PrintTopK("data.txt", 10);
}


int main()
{
	test3();

	return 0;
}