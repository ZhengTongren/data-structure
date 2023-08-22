#define _CRT_SECURE_NO_WARNINGS 1


//int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
//    int* left = (int*)malloc(sizeof(int) * numsSize);
//    int* right = (int*)malloc(sizeof(int) * numsSize);
//
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (i == 0)
//            left[i] = 1;
//        else
//        {
//            left[i] = left[i - 1] * nums[i - 1];
//        }
//    }
//    for (int i = numsSize - 1; i >= 0; i--)
//    {
//        if (i == numsSize - 1)
//            right[i] = 1;
//        else
//        {
//            right[i] = right[i + 1] * nums[i + 1];
//        }
//    }
//    int* answer = (int*)malloc(sizeof(int) * numsSize);
//    *returnSize = numsSize;
//    for (int i = 0; i < numsSize; i++)
//    {
//        answer[i] = left[i] * right[i];
//    }
//    return answer;
//}


//int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
//    int* copy = (int*)malloc(sizeof(int) * numsSize);
//    for (int i = 0; i < numsSize; i++)
//    {
//        copy[i] = nums[i];
//    }
//
//    for (int i = 0; i < numsSize; i++)
//    {
//        copy[nums[i] - 1] += numsSize;
//    }
//    int sz = 0;
//    int* arr = (int*)malloc(sizeof(int) * numsSize);
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (copy[i] <= numsSize)
//        {
//            arr[sz] = i + 1;
//            sz++;
//        }
//    }
//    *returnSize = sz;
//    return arr;
//}


