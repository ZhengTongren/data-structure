#define _CRT_SECURE_NO_WARNINGS 1

//
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int* findErrorNums(int* nums, int numsSize, int* returnSize) {
//    returnSize = (int*)malloc(sizeof(int) * 2);
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i + 1] == nums[i])
//        {
//            returnSize[0] = i + 1;
//            returnSize[1] = i + 2;
//            return returnSize;
//        }
//    }
//    return NULL;
//}
//
//
//int main()
//{
//    int arr[] = { 1,2,2,4 };
//    int* ptr = NULL;
//
//    ptr = findErrorNums(arr, 4, ptr);
//    //printf("")
//    for (int i = 0; i < 2; i++)
//    {
//        printf("%d ", ptr[i]);
//    }
//    return 0;
//}