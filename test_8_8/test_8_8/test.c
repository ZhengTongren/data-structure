#define _CRT_SECURE_NO_WARNINGS 1

//bool isValid(char* s) {
//    ST st;
//    STInit(&st);
//
//    while (*s)
//    {
//        if (*s == '{' || *s == '[' || *s == '(')
//        {
//            STPush(&st, *s);
//        }
//        else
//        {
//            char val = *s;
//            // Ã»ÓÐÆ¥ÅäµÄ×óÀ¨ºÅ
//            if (STEmpty(&st))
//            {
//                return false;
//            }
//
//            char top = STTop(&st);
//            STPop(&st);
//            // ²»Æ¥Åä
//            if (*s == ']' && top != '['
//                || *s == '}' && top != '{'
//                || *s == ')' && top != '(')
//            {
//                return false;
//            }
//        }
//        s++;
//    }
//
//    bool ret = STEmpty(&st);
//
//    STDestroy(&st);
//    return ret;
//}


