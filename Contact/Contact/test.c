#define _CRT_SECURE_NO_WARNINGS 1

//通讯录
//1.能存放1000个人的信息
//每个人信息：姓名+年龄+性别+电话+地址
//2.增加人的信息
//3.删除指定的人的信息
//4.修改指定的人的信息
//5.查找指定的人的信息
//6.排序通讯录的信息

#include "Contact.h"

enum Option
{
	EXIT,
	ADD,
	DEL,
	MODIFY,
	SEARCH,
	SORT,
	PRINT
};

void menu()
{
	printf("********************************************************\n");
	printf("********** 1.add		2.del   ****************\n");
	printf("********** 3.modify		4.search****************\n");
	printf("********** 5.sort		6.print ****************\n");
	printf("********** 0.exit			   *************\n");
	printf("********************************************************\n");
}

int main()
{
	int input = 0;
	Contact con;
	Init_Contact(&con);
	do
	{

		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Add_Contact(&con);
			break;
		case DEL:
			Del_Contact(&con);
			break;
		case MODIFY:
			Modify_Contact(&con);
			break;
		case SEARCH:
			Search_Contact(&con);
			break;
		case SORT:
			break;
		case PRINT:
			Print_Contact(&con);
			break;
		case EXIT:
			return;
			break;
		default:
			printf("选择错误，请重新选择:>");
			break;
		}
	} while (input);
	
}