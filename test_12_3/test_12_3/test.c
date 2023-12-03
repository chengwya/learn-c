#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%x %o", &a, &b);
//	printf("%d\n", a + b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	double price = 0;
//	int month = 0;
//	int day = 0;
//	int flag = 0;
//	scanf("%lf %d %d %d", &price, &month, &day, &flag);
//	if (month == 11 && day == 11)
//	{
//		price *= 0.7;
//		if (flag = 1)
//		{
//			price -= 50;
//		}
//	}
//	else if (month == 12 && day == 12)
//	{
//		price *= 0.8;
//		if (flag == 1)
//		{
//			price -= 50;
//		}
//	}
//	if (price < 0.0)
//		 price = 0.0;
//
//	printf("%.2lf\n", price);
//	return 0;
//}

//方法1
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int score[40] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n-i-1; j++)
//		{
//			if (score[j + 1] > score[j])
//			{
//				int tmp = score[j];
//				score[j] = score[j + 1];
//				score[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", score[i]);
//	}
//	return 0;
//}

//方法2

//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void* e1, const void* e2)
//{
//	return *(int*)e2 - *(int*) e1;
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int score[40] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//
//	qsort(score, n, 4, cmp);
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", score[i]);
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		if (n % 2 == 1)
		{
			printf("Odd\n");
		}
		else
		{
			printf("Even\n");
		}
	}
	return 0;
}