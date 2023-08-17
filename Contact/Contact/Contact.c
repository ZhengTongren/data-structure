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


void ConDestroy(Contact* pc)
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

	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
}


void ConPrint(Contact* pc)
{
	assert(pc);

	printf("%-20s%-10s%-10s%-20s%-10s\n", "����", "�Ա�", "����", "�绰", "��ַ");

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


int FindByName(Contact* pc, char* name)
{
	assert(pc);

	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}


void ConErase(Contact* pc)
{
	assert(pc);
	assert(pc->sz > 0);

	char name[20] = { 0 };
	printf("������Ҫɾ����ϵ������:>");
	scanf("%s", name);

	int pos = FindByName(pc, name);
	if (pos != -1)
	{
		for (int i = pos; i < pc->sz - 1; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
	}
	else
	{
		printf("δ�ҵ�ָ����ϵ��\n");
		return;
	}
	pc->sz--;
}


void menu2()
{
	printf("***************************\n");
	printf("  1. name          2. sex  \n");
	printf("  3. age           4. tele \n");
	printf("  5. addr          0. exit \n");
	printf("***************************\n");
}


void ModifyContact(PeoInfo* pc, int input)
{
	assert(pc);

	if (input == Name)
	{
		printf("����������:>");
		scanf("%s", pc->name);
	}
	else if (input == Sex)
	{
		printf("�������Ա�:>");
		scanf("%s", pc->sex);
	}
	else if (input == Age)
	{
		printf("����������:>");
		scanf("%d", &(pc->age));
	}
	else if (input == Tele)
	{
		printf("������绰:>");
		scanf("%s", pc->tele);
	}
	else if (input == Addr)
	{
		printf("�������ַ:>");
		scanf("%s", pc->addr);
	}
}


void ConModify(Contact* pc)
{
	assert(pc);
	assert(pc->sz > 0);
	char name[20] = { 0 };
	printf("������Ҫ�޸�����ϵ������:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos != -1)
	{
		int input = 0;
		do
		{
			menu2();
			printf("��ѡ��Ҫ�޸���:>");
			scanf("%d", &input);
			ModifyContact(&(pc->data[pos]), input);
			
		} while (input);

	}
	else
	{
		printf("δ�ҵ�ָ����ϵ��\n");
		return;
	}
}