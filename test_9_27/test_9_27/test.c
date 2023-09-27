#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//
//void InsertSort(int* arr, int n)
//{
//	//
//	for (int i = 0; i < n - 1; i++)
//	{
//		int end = i;
//		int tmp = arr[end + 1];
//
//		while (end >= 0)
//		{
//			if (arr[end] > tmp)
//			{
//				arr[end + 1] = arr[end];
//				--end;
//			}
//			else
//			{
//				break;
//			}
//		}
//		arr[end + 1] = tmp;
//	}
//}


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
				--end;
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
	int a[] = { 3, 10, 5, 9, 11, 20, 4, 6 };
	int sz = sizeof(a) / sizeof(int);

	InsertSort(a, sz);
	return 0;
}