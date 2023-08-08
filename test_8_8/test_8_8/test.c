#define _CRT_SECURE_NO_WARNINGS 1

bool isValid(char* s) {
    ST st;
    STInit(&st);

    while (*s)
    {
        if (*s == '{' || *s == '[' || *s == '(')
        {
            STPush(&st, *s);
        }
        else
        {
            char val = *s;
            // 没有匹配的左括号
            /*if (STEmpty(&st))
            {
                return false;
            }*/
            if (STEmpty(&st))
            {
                // 避免 {}[] )
                // STPop只是ps->top--, 并不会把原数据清除
                // st 中 最后保存了 ]
                STDestroy(&st);
                return false;
            }

            char top = STTop(&st);
            STPop(&st);
            // 不匹配
            if (*s == ']' && top != '['
                || *s == '}' && top != '{'
                || *s == ')' && top != '(')
            {
                return false;
            }
        }
        s++;
    }

    bool ret = STEmpty(&st);

    STDestroy(&st);
    return ret;
}


