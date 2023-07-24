#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//void rotate(int* nums, int numsSize, int k) {
//    for (int i = 0; i < k; i++)
//    {
//        int tmp = nums[numsSize - 1];
//        for (int j = numsSize - 2; j >= 0; j--)
//        {
//            nums[j + 1] = nums[j];
//        }
//        nums[0] = tmp;
//    }
//}


//void reverse(int* nums, int begin, int last)
//{
//    while (begin < last)
//    {
//        int tmp = nums[begin];
//        nums[begin] = nums[last];
//        nums[last] = tmp;
//
//        begin++;
//        last--;
//    }
//}
//
//
//void rotate(int* nums, int numsSize, int k) {
//    reverse(nums, 0, numsSize-1);
//    reverse(nums, 0, k - 1);
//    reverse(nums, k, numsSize - 1);
//}
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//
//    rotate(arr, 10, 3);
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


