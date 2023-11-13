#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

enum Option
{
	EXIT,
	ADD,
	SUB,
	MUL,
	DIV
};

void menu()
{
	printf("*************  0.exit  **************\n");
	printf("*************  1.add   **************\n");
	printf("*************  2.sub   **************\n");
	printf("*************  3.mul   **************\n");
	printf("*************  4.div   **************\n");
}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int div(int a, int b)
{
	return a / b;
}

int main()
{
	int n = 0;
	int a = 0;
	int b = 0;
	int ret = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&n);
		switch (n)
		{
		case EXIT:
			printf("�˳�\n");
			break;
		case ADD:
			printf("������������������");
			scanf("%d%d",&a,&b);
			ret = add(a,b);
			printf("%d\n", ret);
			break;
		case SUB:
			printf("������������������");
			scanf("%d%d", &a, &b);
			ret = sub(a, b);
			printf("%d\n", ret);
			break;
		case MUL:
			printf("������������������");
			scanf("%d%d", &a, &b);
			ret = mul(a, b);
			printf("%d\n", ret);
			break;
		case DIV:
			printf("������������������");
			scanf("%d%d", &a, &b);
			ret = div(a, b);
			printf("%d\n", ret);
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (n);
	return 0;
}