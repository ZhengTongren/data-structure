#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

int main()
{
	Contact s1;
	ConInit(&s1);
	ConPushBack(&s1);
	/*ConPushBack(&s1);
	ConPushBack(&s1);
	ConPushBack(&s1);
	ConPushBack(&s1);*/

	ConPrint(&s1);
	return 0;
}