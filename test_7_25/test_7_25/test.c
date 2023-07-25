#define _CRT_SECURE_NO_WARNINGS 1


#include "SeqList.h"


int main()
{
	SL x1;
	SLInit(&x1);
	SLPushBack(&x1, 1);
	SLPushBack(&x1, 1);
	SLPushBack(&x1, 1);
	SLPushBack(&x1, 1);
	SLPushBack(&x1, 1);
	SLPushBack(&x1, 1);
	SLPushBack(&x1, 1);
	SLPushBack(&x1, 1);
	

	SLPrint(&x1);
	SLDestroy(&x1);
	return 0;
}
