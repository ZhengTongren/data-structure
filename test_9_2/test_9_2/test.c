#define _CRT_SECURE_NO_WARNINGS 1

//
//#include <stdio.h>
//
//int main()
//{
//    long long n, k;
//    long long count = 0;
//    scanf("%d %d", &n, &k);
//    if (k == 0)
//    {
//        printf("%lld", n * n);
//    }
//    else
//    {
//        for (long long y = k + 1; y <= n; y++)
//        {
//            long long ret = n % y < k ? 0 : n % y - k + 1;
//            count += (n / y) * (y - k) + ret;
//        }
//        printf("%lld", count);
//    }
//    return 0;
//}


