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




//
//void test3()
//{
//	int a[] = { 2,3,5,7,4,6,8 };
//	HeapSort(a, sizeof(a) / sizeof(int));
//	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//


//void PrintTopK(const char* filename, int k)
//{
//	FILE* fout = fopen(filename, "r");
//	if (fout == NULL)
//	{
//		perror("fopen");
//		exit(-1);
//	}
//
//	int* minheap = (int*)malloc(sizeof(int) * k);
//	if (minheap == NULL)
//	{
//		perror("malloc");
//		exit(-1);
//	}
//
//	for (int i = 0; i < k; i++)
//	{
//		fscanf(fout, "%d", &minheap[i]);
//	}
//
//	for (int i = (k - 2) / 2; i >= 0; --i)
//	{
//		AdjustDown(minheap, k, i);
//	}
//
//	int x = 0;
//	while (fscanf(fout, "%d", &x) != EOF)
//	{
//		if (minheap[0] < x)
//		{
//			minheap[0] = x;
//			AdjustDown(minheap, k, 0);
//		}
//	}
//
//	for (int i = 0; i < k; i++)
//	{
//		printf("%d\n", minheap[i]);
//	}
//
//	free(minheap);
//	fclose(fout);
//}


void PrintTopK(const char* filename, int k)
{
	FILE* fout = fopen(filename, "r");
	if (fout == NULL)
	{
		perror("fopen");
		exit(-1);
	}

	int* minheap = (int*)malloc(sizeof(int) * k);
	if (minheap == NULL)
	{
		perror("malloc");
		exit(-1);
	}

	for (int i = 0; i < k; i++)
	{
		fscanf(fout, "%d", &minheap[i]);
	}

	for (int i = (k - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(minheap, k, i);
	}

	//for (int i = )
	int x = 0;
	while (fscanf(fout, "%d", &x) != EOF)
	{
		if (x > minheap[0])
		{
			minheap[0] = x;
			AdjustDown(minheap, k, 0);
		}
	}

	for (int i = 0; i < k; i++)
	{
		printf("%d\n", minheap[i]);
	}
}

void CreateData()
{
	int n = 1000;
	srand(time(NULL));
	const char* file = "data.txt";
	FILE* fin = fopen(file, "w");

	if (fin == NULL)
	{
		perror("fopen");
		exit(-1);
	}

	for (int i = 0; i < n; i++)
	{
		int x = rand() % 100 + i;
		fprintf(fin, "%d\n", x);
	}
	fclose(fin);
}

int main()
{
	//test2();
	//test3();
	//CreateData();
	PrintTopK("data.txt", 5);
	return 0;
}