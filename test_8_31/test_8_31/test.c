#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int findPeakElement(int* nums, int numsLen) {
//    // write code here
//    int pos = 0;
//    int left = 0;
//    int right = numsLen - 1;
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (nums[mid] < nums[right])
//        {
//            left = mid + 1;
//        }
//        else if (nums[mid] < nums[left])
//        {
//            right = mid - 1;
//        }
//        if (nums[left] < nums[left + 1])
//        {
//            left++;
//        }
//        if (nums[right] < nums[right - 1])
//        {
//            right--;
//        }
//        if (left == mid && mid == right)
//        {
//            pos = mid;
//            left = right + 1;
//        }
//    }
//    return pos;
//}
//
//int main()
//{
//    int arr[] = { 2, 4, 1, 2, 7, 8, 4 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//    int pos = findPeakElement(arr, sz);
//    return 0;
//}

//
//int findPeakElement(int* nums, int numsLen) {
//    // write code here
//    int left = 0;
//    int right = numsLen - 1;
//    while (left < right)
//    {
//        int mid = (left + right) / 2;
//        if (nums[mid] < nums[mid + 1])
//        {
//            left = mid + 1;
//        }
//        else if (nums[mid] > nums[mid + 1])
//        {
//            right = mid;
//        }
//    }
//    return left;
//}


