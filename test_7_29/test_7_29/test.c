#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>

//
//int cmp(const int* a, const int* b)
//{
//	return *a - *b;
//}
//
//int main()
//{
//	int arr[] = { 1,4,5,6,2,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(int), cmp);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//int cmp(const int* a, const int* b)
//{
//    return *a - *b;
//}
//
//int* findErrorNums(int* nums, int numsSize, int* returnSize) {
//    *returnSize = 2;
//    int* ptr = (int*)malloc(sizeof(int) * 2);
//    qsort(nums, numsSize, sizeof(int), cmp);
//
//    int prev = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        int curr = nums[i];
//        if (curr - prev > 1)
//        {
//            ptr[1] = prev + 1;
//        }
//        else if (curr == prev)
//        {
//            ptr[0] = prev;
//        }
//        prev = curr;
//
//        if (nums[numsSize - 1] != numsSize)
//        {
//            ptr[1] = numsSize;
//        }
//    }
//
//    return ptr;
//}


#include <stdio.h>
#include <string.h>

//int PasswordJudge(char* ch, int len)
//{
//    int a1 = 0;
//    int a2 = 0;
//    int a3 = 0;
//    if (len < 8)
//        return 0;
//    for (int i = 0; i < len; i++)
//    {
//        if (ch[i] >= 'A' && ch[i] <= 'Z')
//            a1 = 1;
//        else if (ch[i] >= 'a' && ch[i] <= 'z')
//            a2 = 1;
//        else if (ch[i] >= '1' && ch[i] <= '9')
//            a3 = 1;
//        else
//            return 0;
//    }
//    if (a1 + a2 + a3 >= 2)
//        return 1;
//    else
//        return 0;
//}
//
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    char ch[101] = { 0 };
//
//    while (n)
//    {
//        scanf("%s", ch);
//        int len = strlen(ch);
//        int ret = PasswordJudge(ch, len);
//
//        if (1 == ret)
//            printf("YES\n");
//        else if (0 == ret)
//            printf("NO\n");
//        n--;
//    }
//    return 0;
//}


