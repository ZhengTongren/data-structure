#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int removeElement(int* nums, int numsSize, int val) {
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (val == nums[i])
//        {
//            while (nums[numsSize - 1] == val)
//            {
//                numsSize--;
//                if (numsSize == 0)
//                    return 0;
//            }
//            nums[i] = nums[numsSize - 1];
//            numsSize--;
//        }
//    }
//    
//
//    return numsSize;
//}

//
//int removeElement(int* nums, int numsSize, int val) {
//    
//    for (int i = numsSize - 1; i >= 0; i--)
//    {
//        if (val == nums[i])
//        {
//            nums[i] = nums[numsSize - 1];
//            numsSize--;
//        }
//    }
//
//    return numsSize;
//}
//
//
//
//int main()
//{
//    int numsSize = 0;
//    scanf("%d", &numsSize);
//    int nums[20] = { 0 };
//
//    for (int i = 0; i < numsSize; i++)
//    {
//        scanf("%d", &nums[i]);
//    }
//    int val = 0;
//    scanf("%d", &val);
//    numsSize = removeElement(nums, numsSize, val);
//
//    for (int i = 0; i < numsSize; i++)
//    {
//        printf("%d ", nums[i]);
//    }
//    printf("%d\n", numsSize);
//	return 0;
//}


