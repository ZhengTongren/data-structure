#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"

//int main()
//{
//	printf("%d", -1 / 2);// 0
//	return 0;
//}


void test1()
{
	int a[] = { 65,100,70,32,50,60 };

	HP hp;
	HeapInit(&hp);
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		HeapPush(&hp, a[i]);
	}
	HeapPrint(&hp);
	///*while (!HeapEmpty(&hp))
	//{

	//}*/
	/*for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", hp._a[i]);
	}*/

	/*while (!HeapEmpty(&hp))
	{
		printf("%d ", HeapTop(&hp));
		HeapPop(&hp);
	}*/

	HeapDestroy(&hp);
}


void test2()
{
	int a[] = { 65,100,70,32,50,60 };
	/*for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		AdjustUp(a, i);
	}
	
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}*/

	HP hp;
	HeapInit(&hp);

	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		HeapPush(&hp, a[i]);
	}
	HeapPrint(&hp);

	HeapPop(&hp);
	HeapPrint(&hp);

	HeapDestroy(&hp);

}


void HeapSort(HPDataType* a, int n)
{
	// ½¨¶Ñ
	for (int i = 0; i < n; i++)
	{
		// ÅÅÉýÐò½¨´ó¶Ñ ÅÅ½µÐò½¨Ð¡¶Ñ
		AdjustUp(a, i);
	}

	int end = n - 1;
	while (end > 0)
	{
		AdjustDown(a, end, 0);
		Swap(&a[0], &a[end]);
		end--;
	}
}


void test3()
{
	int a[] = { 2,3,5,7,4,6,8 };
	HeapSort(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}
}


int main()
{
	//test2();
	test3();
	return 0;
}