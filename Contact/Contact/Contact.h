#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <strint.h>

#define NAME 20
#define SEX 5
#define TELE 20
#define ADDR 20

#define DefaultCapacity 4


typedef struct PeoInfo
{
	char name[NAME];
	char sex[SEX];
	int age;
	char tele[TELE];
	char addr[ADDR];
} PeoInfo;


typedef struct Contact
{
	PeoInfo* data;
	int sz;
	int capaity;
} Contact;


void ConInit(Contact* pc);

void ConDestroy(Contact* pc);

void ConPushBack(Contact* pc);

void ConPrint(Contact* pc);

void ConErase(Contact* pc);