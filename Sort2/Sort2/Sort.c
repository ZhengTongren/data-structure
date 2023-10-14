#include "Sort.h"


void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}


void CountSort(int* a, int n)
{
	int min = a[0], max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
			min = a[i];

		if (a[i] > max)
			max = a[i];
	}

	int range = max - min + 1;
	int* Count = (int*)malloc(sizeof(int) * range);
	if (Count == NULL)
	{
		perror("malloc");
		return;
	}
	memset(Count, 0, sizeof(int) * range);

	for (int i = 0; i < n; i++)
	{
		Count[a[i] - min]++;
	}

	// 将数据拷贝回原数组
	int j = 0; 
	for (int i = 0; i < range; i++)
	{
		while (Count[i]--)
		{
			a[j++] = i + min;
		}
	}

	free(Count);
}