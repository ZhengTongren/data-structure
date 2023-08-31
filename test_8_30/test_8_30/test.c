#define _CRT_SECURE_NO_WARNINGS 1

//int* twoSum(int* numbers, int numbersLen, int target, int* returnSize) {
//    // write code here
//    int* pos = (int*)malloc(sizeof(int) * 2);
//    *returnSize = 2;
//
//    for (int i = 0; i < numbersLen; i++)
//    {
//        for (int j = i + 1; j < numbersLen; j++)
//        {
//            if (numbers[i] + numbers[j] == target)
//            {
//                pos[0] = i + 1;
//                pos[1] = j + 1;
//                return pos;
//            }
//        }
//    }
//    return NULL;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//
//int cmp(int* a, int* b)
//{
//    return *a - *b;
//}
//
//int BinarySearch(int* arr, int n, int num)
//{
//    int left = 0;
//    int right = n - 1;
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (arr[mid] > num)
//        {
//            right = mid - 1;
//        }
//        else if (arr[mid] < num)
//        {
//            left = mid + 1;
//        }
//        else if (arr[mid] == num)
//        {
//            return mid;
//        }
//    }
//    return -1;
//}
//
//int* twoSum(int* numbers, int numbersLen, int target, int* returnSize) {
//    // write code here
//    int* copy = (int*)malloc(sizeof(int) * numbersLen);
//    for (int i = 0; i < numbersLen; i++)
//        copy[i] = numbers[i];
//
//    qsort(copy, numbersLen, sizeof(int), cmp);
//    int pos1 = 0, pos2 = 0;
//    for (int i = 0; i < numbersLen; i++)
//    {
//        pos1 = i;
//        pos2 = BinarySearch(copy + i, numbersLen - i, target - copy[i]);
//        if (pos2 != -1)
//        {
//            break;
//        }
//    }
//    for (int i = 0; i < numbersLen; i++)
//    {
//        if (numbers[i] == copy[pos1])
//        {
//            pos1 = i + 1;
//            break;
//        }
//    }
//    for (int i = 0; i < numbersLen; i++)
//    {
//        if (numbers[i] == copy[pos2])
//        {
//            pos2 = i + 1;
//            break;
//        }
//    }
//    if (pos1 > pos2)
//    {
//        int tmp = pos1;
//        pos1 = pos2;
//        pos2 = tmp;
//    }
//    int* pos = (int*)malloc(sizeof(int) * 2);
//    pos[0] = pos1;
//    pos[1] = pos2;
//    *returnSize = 2;
//    return pos;
//}
//
//int main()
//{
//    int arr[4] = { 0, 4, 3, 0 };
//    int len = 4;
//    int t = 0;
//    int size = 0;
//    twoSum(arr, len, t, &size);
//    return 0;
//}

//
//#include <stdio.h>
//
// µ•…Ìπ∑À„∑®
//int main()
//{
//    int n = 0;
//    int ans = 0;
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++)
//    {
//        int tmp = 0;
//        scanf("%d", &tmp);
//        ans ^= tmp;
//    }
//    printf("%d", ans);
//    return 0;
//}


