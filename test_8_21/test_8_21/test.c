#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// err
//int* selfDividingNumbers(int left, int right, int* returnSize) {
//    returnSize = (int*)malloc(sizeof(int));
//    *returnSize = 0;
//    int* arr = (int*)malloc(sizeof(int) * (right - left + 1));
//
//    for (int i = left; i <= right; i++)
//    {
//        int tmp = i;
//        int flag = 1;
//        while (tmp)
//        {
//            if (i % (tmp % 10) != 0)
//            {
//                flag = 0;
//                break;
//            }
//            tmp /= 10;
//        }
//        if (flag == 1)
//        {
//            arr[*returnSize] = i;
//            *returnSize++;
//        }
//    }
//    return arr;
//}
//
//int main()
//{
//    int* arr = NULL;
//    int* sz = NULL;
//    arr = selfDividingNumbers(1, 2, sz);
//
//    for (int i = 0; i < *sz; i++)
//    {
//        printf("%d\n", arr[i]);
//    }
//    return 0;
//}


//
//int* selfDividingNumbers(int left, int right, int* returnSize) {
//    int sz = 0;
//    int* arr = (int*)malloc(sizeof(int) * (right - left + 1));
//
//    for (int i = left; i <= right; i++)
//    {
//        int tmp = i;
//        int flag = 1;
//        while (tmp)
//        {
//            if (tmp % 10 == 0 || i % (tmp % 10) != 0)
//            {
//                flag = 0;
//                break;
//            }
//            tmp /= 10;
//        }
//        if (flag == 1)
//        {
//            arr[sz] = i;
//            sz++;
//        }
//    }
//    *returnSize = sz;
//    return arr;
//}