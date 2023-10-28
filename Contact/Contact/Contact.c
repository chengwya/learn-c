#include "Contact.h"

static int Find_ByName(Contact* c,char name[])
{
	int i = 0;
	for (i = 0; i < c->sz; i++)
	{
		if (strcmp(c->data[i].name ,name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void Init_Contact(Contact* c)
{
	c->sz = 0;
	memset(c->data, 0, sizeof(c->data));
}

void Add_Contact(Contact* c)
{
	if (c->sz == 1000)
	{
			printf("ͨѶ¼�������޷�����\n");
			return;
	}

	printf("����������:>");
	scanf("%s",c->data[c->sz].name );
	printf("����������:>");
	scanf("%d", &(c->data[c->sz].age));
	printf("�������Ա�:>");
	scanf("%s", c->data[c->sz].sex);
	printf("������绰:>");
	scanf("%s", c->data[c->sz].tele);
	printf("�������ַ:>");
	scanf("%s", c->data[c->sz].addr);

	c->sz++;
	printf("���ӳɹ�\n");
}

void Print_Contact(const Contact* c)
{
	int i = 0;
	printf("%-10s\t%-5s\t%-8s\t%-15s\t%-20s\n", "����","����","�Ա�","�绰","��ַ");
	for (i = 0; i < c->sz; i++)
	{
		printf("%-10s\t%-5d\t%-8s\t%-15s\t%-20s\n", 
			c->data[i].name,
			c->data[i].age, 
			c->data[i].sex, 
			c->data[i].tele, 
			c->data[i].addr);
	}
}

void Del_Contact(Contact* c)
{
	char name[MAX_NAME] = { 0 };
	if (c->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
	}
	printf("��������Ҫɾ������Ϣ:>");
	scanf("%s", name);
	int pos = Find_ByName(c, name);
	if (pos == -1)
	{
		printf("��Ҫɾ������Ϣ������\n");
	}

	for (int i = 0; i < c->sz - 1; i++)
	{
		c->data[i] = c->data[i + 1];
	}

	c->sz--;
	printf("ɾ���ɹ�\n");
}

void Modify_Contact(Contact* c)
{
	char name[MAX_NAME] = { 0 };
	printf("��������Ҫ�޸ĵ���Ϣ:>");
	scanf("%s", name);
	int pos = Find_ByName(c, name);
	if (pos == -1)
	{
		printf("��Ҫ�޸ĵ���Ϣ������\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", c->data[pos].name);
		printf("����������:>");
		scanf("%d", &(c->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", c->data[pos].sex);
		printf("������绰:>");
		scanf("%s", c->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", c->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}

}

void Search_Contact(Contact* c)
{
	char name[MAX_NAME] = { 0 };
	printf("��������Ҫ���ҵ���Ϣ:>");
	scanf("%s", name);
	int pos = Find_ByName(c, name);
	if (pos == -1)
	{
		printf("��Ҫ���ҵ���Ϣ������\n");
	}
	else
	{
		printf("%-10s\t%-5s\t%-8s\t%-15s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");

		printf("%-10s\t%-5d\t%-8s\t%-15s\t%-20s\n",
			c->data[pos].name,
			c->data[pos].age,
			c->data[pos].sex,
			c->data[pos].tele,
			c->data[pos].addr);
	}
}