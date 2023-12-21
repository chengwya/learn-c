#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		int a = n % 10;
//		if (a % 2 == 0)
//		{
//			a=0;
//		}
//		else
//		{
//			a=1;
//		}
//		ret += a * pow(10, i);
//		n = n / 10;
//		i++;
//	}
//	printf("%d", ret);
//	return 0;
//}

//#include <stdio.h>
//
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = fib(n);
//	printf("%d\n", num);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int k = 0;
//	int arr[100000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &k);
//		arr[k] = k;
//	}
//	for (i = 0; i < 100000; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int score = 0;
	scanf("%d", &score);
	if (score >= 90 && score <= 100)
		printf("A\n");
	else if (score >= 80 && score < 90)
		printf("B\n");
	else if (score >= 70 && score < 80)
		printf("C\n");
	else if (score >= 60 && score < 70)
		printf("D\n");
	else if (score >= 0 && score < 60)
		printf("E\n");
	else
		printf("F\n");
	return 0;
}