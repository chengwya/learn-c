#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int a = -10;
//	int b = 10;
//
//	return 0;
//}

//#include <stdio.h>
//
////unsigned int check_sys()
////{
////	int a = 1;
////	char* p = (char*)&a;
////	if (*p == 1)
////	{
////		return 1;
////	}
////	else
////	{
////		return 0;
////	}
////}
//
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//输出什么？
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	//按照补码的形式进行运算，最后格式化成为有符号整数
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//
//#include <stdio.h>
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int x = 9;
	float* pFloat = (float*)&x;
	printf("x的值为：%d\n", x);
	printf("*pFloat的值为：%f\n", *pFloat);
	*pFloat = 9.0;
	printf("x的值为：%d\n", x);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}