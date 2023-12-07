#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	double x1 = 0;
//	double x2 = 0;
//	char ch = 0;
//	while (scanf("%lf%c%lf", &x1, &ch, &x2) != EOF)
//	{
//		switch (ch)
//		{
//		case '+':
//			printf("%.4lf%c%.4lf=%.4lf\n", x1, ch, x2, x1+x2);
//			break;
//		case '-':
//			printf("%.4lf%c%.4lf=%.4lf\n", x1, ch, x2, x1- x2);
//			break;
//		case '*':
//			printf("%.4lf%c%.4lf=%.4lf\n", x1, ch, x2, x1 * x2);
//			break;
//		case '/':
//			if (x2 == 0.0)
//			{
//				printf("Wrong!Division by zero!\n");
//				break;
//			}
//			printf("%.4lf%c%.4lf=%.4lf\n", x1, ch, x2, x1 / x2);
//			break;
//		default:
//			printf("Invalid operation!\n");
//			break;
//		}
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j < n-i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}