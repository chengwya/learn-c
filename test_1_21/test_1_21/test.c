#define _CRT_SECURE_NO_WARNINGS 1
////输入三位整数，按从大到小输出
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		d = a;
//		a = b;
//		b = d;
//	}
//	if (a < c)
//	{
//		d = a;
//		a = c;
//		c = d;
//	}
//	if (b < c)
//	{
//		d = b;
//		b = c;
//		c = d;
//	}
//	printf("%d%d%d",a, b, c);
//	return 0;
//}


////打印1-100之间所有3的倍数的数
//#include <stdio.h>
//int main()
//{
//	for (int i = 1;i <= 100;i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////给定两个数，求这两个数的最大公约数
//#include <stdio.h>
//int main()
//{
	//int m = 0;
	//int n = 0;
	//int min = 0;
//	scanf("%d%d", &m, &n);
//	if (m < n)
//		min = m;
//	else
//		min = n;
//	while (1)
//	{
//		if (m % min == 0 && n % min == 0)
//			break;
//		else
//			min--;
//	}
//	printf("最大公因数为%d", min);
//	return 0;
//}

//辗转相除法
#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int min = 0;
	scanf("%d%d", &m, &n);
	while (m%n)
	{
		min = m % n;
		m = n;
		n = min;
	}
	/*while (1)
	{
		min = m % n;
		if (min != 0)
		{
			m = n;
			n = min;
		}
		else
			break;
	}*/

	printf("最大公因数为%d", min);
	return 0;
}

//打印1000年-2000年之间的闰年
//闰年：1.能被4整除，不能被100整除 2.能被400整除
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//		else
//			continue;
//	}
//	return 0;
//}

////打印100-200之间的素数
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//优化版
// x = a * b
// a和b之间一定至少有一个 <= x的开平方
// 100 = 50*2 = 25*4 = 10*10
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int sign = 1; //假设i为素数
//		for (j = 2; j <= sqrt(i); j++)  //sqrt开平方函数，使用时需引用math.h头文件
//		{
//			if (i % j == 0)
//				sign = 0;
//				break;
//		}
//		if (sign == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}