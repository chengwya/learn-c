#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define MAX_NAME 20
#define MAX_SEX 8
#define MAX_TELE 15
#define MAX_ADDR 30
#define MAX 1000

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact
{
	PeoInfo data[MAX];
	int sz;
}Contact;

void Init_Contact(Contact* c);
void Add_Contact(Contact* c);
void Print_Contact(const Contact* c);
void Del_Contact(Contact* c);
void Modify_Contact(Contact* c);
void Search_Contact(Contact* c);