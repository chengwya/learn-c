#define _CRT_SECURE_NO_WARNINGS 1

//#include <iostream>
//
//using namespace std;
//
//class TDate
//{
//private:
//	int Year;
//	int Month;
//	int Day;
//public:
//	TDate(int year = 0; , int month = 0, int day = 0)
//	{
//		Year = year;
//		Month = month;
//		Day = day;
//	}
//	void print()
//	{
//		cout << Day << "/" << Month << "/" << Year << endl;
//	}
//};
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	cin >> year >> month >> day;
//	TDate d(year, month, day);
//	d.print();
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int m = 0;
//	int arr[1001] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		arr[m] = m;
//	}
//	for (i = 0; i < 1001; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}

// 
//#include <stdio.h>
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 999; i++)
//	{
//		//判断i是否为质数
//		if (is_prime(i))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

#include <stdio.h>

int isprime(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int n = 0;
	int count = 0;
	int i = 0;
	for (i = 100; i < 1000; i++)
	{
		if (isprime(i))
			count++;
	}
	printf("%d\n", count);
	return 0;
}