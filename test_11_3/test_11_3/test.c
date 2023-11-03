#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d",&n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j || i + j == n-1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
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
//	int score = 0;
//	int max = 0;
//	int min = 100;
//	int sum = 0;
//	for (int i = 0; i < 7; i++)
//	{
//		scanf("%d", &score);
//			sum += score;
//			if (max < score)
//			{
//				max = score;
//			}
//			if (min > score)
//			{
//				min = score;
//			}
//	}
//	printf("%.2f\n",(sum-max-min)/5.0);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		int day = days[month];
//		if (month == 2)
//		{
//			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//			{
//				day += 1;
//			}
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int i = 0;
	int N = 0;
	int M = 0;
	int arr[51] = { 0 };
	scanf("%d",&N);
	for ( i = 0; i < N; i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&M);
	for ( i = N - 1; i >= 0; i--)
	{
		if (arr[i] > M)
		{
			arr[i+1] = arr[i];
		}
		else
		{
			arr[i + 1] = M;
			break;
		}
	}
	if (i < 0)
	{
		arr[0] = M;
	}

	for ( i = 0; i < N + 1; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}