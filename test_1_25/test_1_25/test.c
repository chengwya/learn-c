#define _CRT_SECURE_NO_WARNINGS 1
//代码1
//#include <stdio.h>
//
//void is_prime(int a);
//
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	is_prime(x);
//	return 0;
//}
//
//void is_prime(int a)
//{
//	int i = 0;
//	for (i = 2; i < a; i++)
//	{
//		if (a % i == 0)
//		{
//			printf("%d不是素数\n", a);
//			break;
//		}
//		else
//		{
//			printf("%d是素数\n", a);
//			break;
//		}
//	}
//}
//代码2
//#include <stdio.h>
//
//void leap_year(int x);
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	leap_year(year);
//	return 0;
//}
//
//void leap_year(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0)
//	{
//		printf("%d是闰年", x);
//	}
//	else if (x % 400 == 0)
//	{
//		printf("%d是闰年", x);
//	}
//	else
//		printf("%d不是闰年", x);
//}
//代码3
#include <stdio.h>

int bineary_search(int a[], int key, int length);

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int x = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &x);
	int num = bineary_search(arr, x , len);
	if (num == -1)
	{
		printf("找不到%d\n", x);
	}
	if (num == 1)
	{
		printf("%d找到了\n", x);
	}
	return 0;
}

int bineary_search(int a[],int key, int length)
{
	int left = 0;
	int right = length - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > key)
		{
			right = mid - 1;
		}
		else if (a[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			return 1;
		}
	}
	return -1;
}
