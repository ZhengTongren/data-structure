#define _CRT_SECURE_NO_WARNINGS 1

//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char ch[501] = { 0 };
//    scanf("%s", ch);
//
//    int len = strlen(ch);
//    int count = 0;
//    for (int i = 0; i < len; i++)
//    {
//        int tmp = 1;
//
//        for (int j = 0; j < i; j++)
//        {
//            if (ch[i] == ch[j])
//            {
//                tmp = 0;
//            }
//        }
//        if (tmp == 1)
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    int count[128] = { 0 };
//    char ch[501] = { 0 };
//    scanf("%s", ch);
//
//    for (int i = 0; i < strlen(ch); i++)
//    {
//        count[ch[i]]++;
//    }
//    int tmp = 0;
//    for (int i = 0; i < 128; i++)
//    {
//        if (count[i])
//            tmp++;
//    }
//    printf("%d", tmp);
//    return 0;
//}

//
//int majorityElement(int* nums, int numsSize) {
//    int count = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        for (int j = i; j < numsSize && nums[i] != INT_MIN; j++)
//        {
//            if (nums[j] == nums[i])
//            {
//                count++;
//                if (j != i)
//                    nums[j] = INT_MIN;
//            }
//            if (count > numsSize / 2)
//                return nums[i];
//
//        }
//    }
//    return NULL;
//}


