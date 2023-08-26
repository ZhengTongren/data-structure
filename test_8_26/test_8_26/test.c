#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int flag = 0;
//    for (int i = 2; i <= n; i++)
//    {
//        int sum = 0;
//        for (int j = 1; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                sum += j;
//            }
//        }
//        if (sum == i)
//        {
//            //printf("%d\n", i);
//            flag++;
//        }
//    }
//    printf("%d", flag);
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char str[32] = { 0 };
//    scanf("%s", str);
//    for (int i = strlen(str) - 1; i >= 0; i--)
//    {
//        printf("%c", str[i]);
//    }
//    return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char ch[10001] = { 0 };
//    gets(ch);
//
//    int len = strlen(ch);
//    for (int i = len - 1; i > 0; i--)
//    {
//        if (ch[i] == ' ')
//        {
//            for (int j = i + 1; ch[j] != '\0' && ch[j] != ' '; j++)
//            {
//                if ((ch[j] >= 'A' && ch[j] <= 'Z') || (ch[j] >= 'a' && ch[j] <= 'z'))
//                {
//                    printf("%c", ch[j]);
//                }
//            }
//            printf(" ");
//        }
//    }
//    return 0;
//}


