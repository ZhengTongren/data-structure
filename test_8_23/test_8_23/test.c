#define _CRT_SECURE_NO_WARNINGS 1

//
//int findMaxConsecutiveOnes(int* nums, int numsSize) {
//    //int t[numsSize] = { 0 };
//    int* t = (int*)malloc(sizeof(int) * numsSize);
//    int pos = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        t[i] = 0;
//    }
//
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == 1)
//        {
//            t[pos] = 1;
//            pos++;
//        }
//        else if (i < numsSize - 1 && nums[i] == 0 && nums[i + 1] == 1)
//        {
//            pos = 0;
//        }
//    }
//    int times = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        times += t[i];
//    }
//    return times;
//}


