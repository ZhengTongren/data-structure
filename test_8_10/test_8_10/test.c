#define _CRT_SECURE_NO_WARNINGS 1

//
//int dominantIndex(int* nums, int numsSize) {
//    int max = INT_MIN;
//    int pos = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] > max)
//        {
//            max = nums[i];
//            pos = i;
//        }
//    }
//
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (max < 2 * nums[i] && nums[i] != max)
//        {
//            return -1;
//        }
//    }
//    return pos;
//}


//int cmp(int* a, int* b)
//{
//    return *a - *b;
//}
//
//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
//    int size = 0;
//    int big = nums1Size > nums2Size ? nums1Size : nums2Size;
//    int* nums = (int*)malloc(big * sizeof(int));
//    qsort(nums1, nums1Size, sizeof(int), cmp);
//    qsort(nums2, nums2Size, sizeof(int), cmp);
//
//    for (int i = 0; i < nums1Size; i++)
//    {
//        for (int j = 0; j < nums2Size; j++)
//        {
//            if (nums1[i] == nums2[j])
//            {
//                if (size == 0)
//                {
//                    nums[size++] = nums1[i];
//                }
//                else
//                {
//                    if (nums1[i] != nums[size - 1])
//                    {
//                        nums[size++] = nums1[i];
//                    }
//                }
//            }
//        }
//    }
//    *returnSize = size;
//    return nums;
//}


//int cmp(int* a, int* b)
//{
//    return *a - *b;
//}
//
//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
//    int size = 0;
//    int least = nums1Size < nums2Size ? nums1Size : nums2Size;
//    int* nums = (int*)malloc(least * sizeof(int));
//    qsort(nums1, nums1Size, sizeof(int), cmp);
//    qsort(nums2, nums2Size, sizeof(int), cmp);
//
//    int i = 0, j = 0;
//    while (i < nums1Size && j < nums2Size)
//    {
//        if (nums1[i] < nums2[j])
//        {
//            i++;
//        }
//        else if (nums1[i] > nums2[j])
//        {
//            j++;
//        }
//        else if (nums1[i] == nums2[j])
//        {
//            if (size == 0)
//            {
//                nums[size++] = nums1[i];
//            }
//            else
//            {
//                if (nums[size - 1] != nums1[i])
//                {
//                    nums[size++] = nums1[i];
//                }
//            }
//            i++;
//        }
//    }
//
//    *returnSize = size;
//    return nums;
//}


