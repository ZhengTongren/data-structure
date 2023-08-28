#define _CRT_SECURE_NO_WARNINGS 1

//err
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char* str, int len)
//{
//    int left = 0;
//    int right = len - 1;
//
//    while (left < right)
//    {
//        char tmp = str[left];
//        str[left] = str[right];
//        str[right] = tmp;
//
//        left++;
//        right--;
//    }
//}
//
//int main() {
//    char ch[10001] = { 0 };
//    gets(ch);
//    int len = strlen(ch);
//
//    reverse(ch, len);
//
//    int left = 0;
//    int right = 0;
//    while (ch[right] != '\0')
//    {
//        while (ch[right] != ' ' && ch[right] != '\0')
//        {
//            right++;
//            // 7 13
//            // 0 6
//        }
//        reverse(ch + left, right - left);
//        if (ch[right] != '\0')
//        {
//            left = right + 1;
//            right = left;
//        }
//    }
//
//    for (int i = 0; i < len; i++)
//    {
//        if ((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z'))
//        {
//            printf("%c", ch[i]);
//        }
//        else {
//            printf(" ");
//        }
//    }
//    return 0;
//}



//right
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char* str, int len)
//{
//    int left = 0;
//    int right = len - 1;
//
//    while (left < right)
//    {
//        char tmp = str[left];
//        str[left] = str[right];
//        str[right] = tmp;
//
//        left++;
//        right--;
//    }
//}
//
//int main() {
//    char ch[10001] = { 0 };
//    gets(ch);
//    int len = strlen(ch);
//
//    reverse(ch, len);
//
//    int left = 0;
//    int right = 0;
//    while (ch[right] != '\0')
//    {
//        while (((ch[right] >= 'A' && ch[right] <= 'Z') || (ch[right] >= 'a' && ch[right] <= 'z'))
//            && ch[right] != '\0')
//        {
//            right++;
//            // 7 13
//            // 0 6
//        }
//        reverse(ch + left, right - left);
//        if (ch[right] != '\0')
//        {
//            left = right + 1;
//            right = left;
//        }
//    }
//
//    for (int i = 0; i < len; i++)
//    {
//        if ((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z'))
//        {
//            printf("%c", ch[i]);
//        }
//        else {
//            printf(" ");
//        }
//    }
//    return 0;
//}