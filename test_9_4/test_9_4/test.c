#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//    long long n, k;
//    scanf("%d %d", &n, &k);
//    int count = 0;
//    for (long long y = k + 1; y <= n; y++)
//    {
//        for (long long x = k; x <= n; x++)
//        {
//            int rem =
//        }
//    }
//    return 0;
//}


//int main()
//{
//    long long n, k;
//    scanf("%lld %lld", &n, &k);
//    long long count = 0;
//    for (long long y = k + 1; y <= n; y++)
//    {
//        long long rem = (n % y < k) ? 0 : (n % y - k + 1);
//        count += (n / y) * (y - k) + rem;
//    }
//    printf("%lld\n", count);
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    long long n, k;
//    scanf("%lld %lld", &n, &k);
//    long long count = 0;
//    if (k == 0)
//    {
//        count = n * n;
//    }
//    else
//    {
//        for (long long y = k + 1; y <= n; y++)
//        {
//            long long rem = (n % y < k) ? 0 : (n % y - k + 1);
//            count += (n / y) * (y - k) + rem;
//        }
//    }
//    printf("%lld\n", count);
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
//        if (nums[mid + 1] > nums[mid])
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


