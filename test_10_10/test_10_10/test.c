#define _CRT_SECURE_NO_WARNINGS 1

//int (*pa1[10])();
//int* pa2[10]();
//int (*)()pa3[10];

//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("******** 1.Add ********\n");
//	printf("******** 2.Sub ********\n");
//	printf("******** 3.Mul ********\n");
//	printf("******** 4.Div ********\n");
//	printf("******** 0.ext ********\n");
//}
//
//int main()
//{	
//	int input = 0;
//	do
//	{
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		menu();
//		printf("请选择运算方式：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出计算!\n");
//			break;
//		case 1:
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数：");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		default:
//			printf("选择错误，请重新选择!\n");
//		}
//
//	} while (input);
//
//	return 0;
//}

#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("******** 1.Add ********\n");
	printf("******** 2.Sub ********\n");
	printf("******** 3.Mul ********\n");
	printf("******** 4.Div ********\n");
	printf("******** 0.ext ********\n");
}

int main()
{
	int input = 1;
	int(*pa[5])(int , int) = { NULL, Add, Sub, Mul, Div };
	int x = 0;
	int y = 0;
	int ret = 0;
	while (input)
	{
		menu();
		printf("请输入计算方式：");
		scanf("%d", &input);
		if (input <= 4 && input >= 1)
		{
			printf("请输入两个操作数：");
			scanf("%d %d", &x, &y);
			ret = (*pa[input])(x, y);
			printf("%d\n", ret);
		}
		else
		{
			printf("输入错误！\n");
		}
	}
	return 0;
}