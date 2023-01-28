#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//void print(unsigned int n);
//
//int main()
//{
//	int n = 0;
//	scanf("%u", &n);
//	print(n);
//	return 0;
//}
//
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//	}
//	else
//		printf("%d ", n);
//	
//}

//#include <stdio.h>
//
//int main()
//{
//	char arr[] = "Hello World";
//	printf("%d", Strlen(arr));
//	return 0;
//}
//
//int Strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + Strlen(str + 1);
//		str++;
//	}
//	else
//	{
//		return 0;
//	}
//}

//#include <stdio.h>
//
//int fac(int n);
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = fac(n);
//	printf("%d", sum);
//	return 0;
//}
//
//int fac(int n)
//{
//	if (n > 1)
//	{
//		return n * fac(n - 1);
//	}
//	else
//		return 1;
//}

//#include <stdio.h>
//
//int fib(int n);
//
//int count = 0;
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = fib(n);
//	printf("%d", sum);
//	return 0;
//}
//
//int fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n > 2)
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//	else
//		return 1;
//}


//#include <stdio.h>
//
//int fib(int n);
//
//int count = 0;
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = fib(n);
//	printf("%d", sum);
//	return 0;
//}
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}