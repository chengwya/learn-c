#define _CRT_SECURE_NO_WARNINGS 1

//ͨѶ¼
//1.�ܴ��1000���˵���Ϣ
//ÿ������Ϣ������+����+�Ա�+�绰+��ַ
//2.�����˵���Ϣ
//3.ɾ��ָ�����˵���Ϣ
//4.�޸�ָ�����˵���Ϣ
//5.����ָ�����˵���Ϣ
//6.����ͨѶ¼����Ϣ

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
		printf("��ѡ��:>");
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
			printf("ѡ�����������ѡ��:>");
			break;
		}
	} while (input);
	
}