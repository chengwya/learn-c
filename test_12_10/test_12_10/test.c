#define _CRT_SECURE_NO_WARNINGS 1

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
//				if (i == j)
//				{
//					printf("* ");
//				}
//				else if (i == n - 1 || j == 0)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	float score = 0.0;
//	float sum = 0.0;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%f", &score);
//		sum += score;
//	}
//	printf("%.2f\n", sum/5.0);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		switch (n)
//		{
//		case 200:
//			printf("OK\n");
//			break;
//		case 202:
//			printf("Accepted\n");
//			break;
//		case 400:
//			printf("Bad Request\n");
//			break;
//		case 403:
//			printf("Forbidden\n");
//			break;
//		case 404:
//			printf("Not Found\n");
//			break;
//		case 500:
//			printf("Internal Server Error\n");
//			break;
//		case 502:
//			printf("Bad Gateway\n");
//			break;
//		default:
//			break;
//		}
//	}
//}

#include <stdio.h>

int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		int i = 0;
		for (i = 1;i <= n; i++)
		{
			int j = 0;
			for (j = 1; j <= i; j++)
			{
				printf("%d ", j);
			}
			printf("\n");
		}
	}
	return 0;
}