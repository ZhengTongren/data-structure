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
            // û��ƥ���������
            /*if (STEmpty(&st))
            {
                return false;
            }*/
            if (STEmpty(&st))
            {
                // ���� {}[] )
                // STPopֻ��ps->top--, �������ԭ�������
                // st �� ��󱣴��� ]
                STDestroy(&st);
                return false;
            }

            char top = STTop(&st);
            STPop(&st);
            // ��ƥ��
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


