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
			printf("通讯录已满，无法增加\n");
			return;
	}

	printf("请输入名字:>");
	scanf("%s",c->data[c->sz].name );
	printf("请输如年龄:>");
	scanf("%d", &(c->data[c->sz].age));
	printf("请输入性别:>");
	scanf("%s", c->data[c->sz].sex);
	printf("请输入电话:>");
	scanf("%s", c->data[c->sz].tele);
	printf("请输入地址:>");
	scanf("%s", c->data[c->sz].addr);

	c->sz++;
	printf("增加成功\n");
}

void Print_Contact(const Contact* c)
{
	int i = 0;
	printf("%-10s\t%-5s\t%-8s\t%-15s\t%-20s\n", "姓名","年龄","性别","电话","地址");
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
		printf("通讯录为空，无法删除\n");
	}
	printf("请输入你要删除的信息:>");
	scanf("%s", name);
	int pos = Find_ByName(c, name);
	if (pos == -1)
	{
		printf("你要删除的信息不存在\n");
	}

	for (int i = 0; i < c->sz - 1; i++)
	{
		c->data[i] = c->data[i + 1];
	}

	c->sz--;
	printf("删除成功\n");
}

void Modify_Contact(Contact* c)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入你要修改的信息:>");
	scanf("%s", name);
	int pos = Find_ByName(c, name);
	if (pos == -1)
	{
		printf("你要修改的信息不存在\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", c->data[pos].name);
		printf("请输如年龄:>");
		scanf("%d", &(c->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", c->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", c->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", c->data[pos].addr);
		printf("修改成功\n");
	}

}

void Search_Contact(Contact* c)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入你要查找的信息:>");
	scanf("%s", name);
	int pos = Find_ByName(c, name);
	if (pos == -1)
	{
		printf("你要查找的信息不存在\n");
	}
	else
	{
		printf("%-10s\t%-5s\t%-8s\t%-15s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");

		printf("%-10s\t%-5d\t%-8s\t%-15s\t%-20s\n",
			c->data[pos].name,
			c->data[pos].age,
			c->data[pos].sex,
			c->data[pos].tele,
			c->data[pos].addr);
	}
}