#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//    int arr[32] = { 0 };
//    int mon = 0;
//    scanf("%d", &mon);
//
//
//    for (int i = 0; i < mon; i++)
//    {
//        if (i >= 2)
//        {
//            arr[i] = arr[i - 1] + arr[i - 2];
//        }
//        else {
//            arr[i] = 1;
//        }
//    }
//    printf("%d", arr[mon - 1]);
//    return 0;
//}

//
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int n = 0, m = 0;
//
//    while (scanf("%d %d", &n, &m) == 2)
//    {
//        double arr[10000] = { 0.0 };
//        arr[0] = n;
//        double total = arr[0];
//        for (int i = 1; i < m; i++)
//        {
//            arr[i] = sqrt(arr[i - 1]);
//            total += arr[i];
//        }
//        printf("%.2f\n", total);
//    }
//    return 0;
//}

//
//int* masterMind(char* solution, char* guess, int* returnSize) {
//    int* answer = (int*)malloc(sizeof(int) * 2);
//    answer[0] = answer[1] = 0;
//    for (int i = 0; i < 4; i++)
//    {
//        if (guess[i] == solution[i])
//        {
//            answer[0]++;
//            guess[i] = solution[i] = '1';
//        }
//    }
//    for (int i = 0; i < 4; i++)
//    {
//        if (guess[i] != solution[i])
//        {
//            for (int j = 0; j < 4; j++)
//            {
//                if (guess[j] == solution[i])
//                {
//                    answer[1]++;
//                    guess[j] = solution[i] = '1';
//                    break;
//                }
//            }
//        }
//    }
//    *returnSize = 2;
//    return answer;
//}


