#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

void InsertSort(int* arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = arr[end + 1];

		while (end >= 0)
		{
			if (arr[end] > tmp)
			{
				arr[end + 1] = arr[end];
				end--;
			}
			else
			{
				break;
			}
		}
		arr[end + 1] = tmp;
	}
}


int main()
{
	int arr[] = { 10, 12, 9, 6, 45, 20 };
	int sz = sizeof(arr) / sizeof(int);

	InsertSort(arr, sz);
	return 0;
}