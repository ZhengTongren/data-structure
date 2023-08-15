#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"


void ConInit(Contact* pc)
{
	assert(pc);

	PeoInfo* tmp = (PeoInfo*)malloc(sizeof(PeoInfo) * DefaultCapacity);
	if (tmp == NULL)
	{
		perror("malloc");
		exit(-1);
	}
	pc->data = tmp;
	pc->capaity = DefaultCapacity;
	pc->sz = 0;
}


void Destroy(Contact* pc)
{
	assert(pc);

	free(pc->data);
	pc->capaity = pc->sz = 0;
}


ConCapacityCheck(Contact* pc)
{
	if (pc->sz == pc->capaity)
	{
		PeoInfo* tmp = (PeoInfo*)realloc(pc->data, sizeof(PeoInfo) * 2 * pc->capaity);
		if (tmp == NULL)
		{
			perror("realloc");
			exit(-1);
		}
		pc->data = tmp;
		pc->capaity *= 2;
	}
}


void ConPushBack(Contact* pc)
{
	assert(pc);

	ConCapacityCheck(pc);

	printf("请输入姓名:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
}


void ConPrint(Contact* pc)
{
	assert(pc);

	printf("%-20s%-10s%-10s%-20s%-10s\n", "姓名", "性别", "年龄", "电话", "地址");

	for (int i = 0; i < pc->sz; i++)
	{
		printf("%-20s%-10s%-10d%-20s%-10s\n",
			pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}


void FindByName(Contact* pc)
{
	assert(pc);


}


void ConErase(Contact* pc)
{
	assert(pc);

	
}