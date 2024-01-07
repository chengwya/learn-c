#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf(" i = %d\n", i);
//		if (1)
//		{
//			auto int j = 0;  //自动变量(局部变量)
//			printf("1. j = %d\n", j);
//			j += 1;
//			printf("2. j = %d\n", j);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	register int x = 0;
//	printf("x = %d\n", &x);
//	//编译后会报错，register修饰的变量不能取地址。
//	//不是所有的编译器都会报错，目前用的vs2019报错了。
//	return 0;
//}

#include <stdio.h>

static int b = 10;

void pt()
{
	static int c = 30;
	printf("c = %d\n", c);
}

int main()

{
	int a = 10;
	printf("a = %d\n",a);
	b = 20;
	printf("b = %d\n", b);

	return 0;
}