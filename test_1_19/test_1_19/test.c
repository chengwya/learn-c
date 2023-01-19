#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////使用while循环，实现相同的功能
//int main()
//{
//	int i = 0; //循环变量初始化部分
//	while (i < 5) //条件判断部分
//	{
//		printf("%d ",i);
//		i++; //调整部分
//	}
//}

//#include <stdio.h>
////使用for循环，实现相同功能
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int x = 3;
//	for (x = 0; x <= 5; x++)
//	{
//		if (x == 3)
//		{
//			break;
//		}
//		printf("%d ", x);
//	}
//	return 0;
//}
//int main()
//{
//	//前闭后开区间写法
//	int i = 0;
//	for ( i=1; i<5; i++)
//
//	//前后皆为闭区间
//	for( i=1; i<=4; i++)
//	return 0;
//}


//#include <stdio.h>
////代码1
//int main()
//{
//	for (;;) //for循环中的初始化部分、条件判断部分和调整部分是可以省略的，但不建议初学者使用，容易出问题。
//	{
//		printf("Hello World!");
//	}
//	return 0;
//}

//#include <stdio.h>
////代码2
//int main()
//{
//	int num = 0; //计数
//	int x = 0;
//	int y = 0;
//	//请问这里一共打印多少次Hello World ?
//	for (x = 1; x < 5; x++)
//	{
//		for (y = 1; y < 5; y++)
//		{
//			printf("Hello World!\n");
//			num++;
//		}
//		printf("%d",num);
//	}
//	return 0;
//}

//#include <stdio.h>
////代码3
//int main()
//{
//	int x = 1;
//	int y = 1;
//	//请问这里一共打印多少次Hello World ?
//	for (; x < 5; x++)
//	{
//		for (; y < 5; y++)
//		{
//			printf("Hello World!\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
////代码4
//int main()
//{
//	int x = 0;
//	int y = 0;
//	//使用多余一个变量控制循环
//	for (x = 1, y = 3; x < 5 && y>0; x++, y++)
//	{
//		printf("Hello world\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int x = 0;
//	do
//	{
//		printf("Hello World\n");
//	} while (x > 0);
//	return 0;
//}

//#include <stdio.h>
////代码1
//int main()
//{
//	int x = 5;
//	do
//	{
//		if (x == 3)
//			break;
//		printf("%d ", x);
//		x--;
//	} while (x > 0);
//	return 0;
//}

#include <stdio.h>
//代码2
int main()
{
	int x = 5;
	do
	{
		if (x == 3)
			continue;
		printf("%d ", x);
		x--;
	} while (x > 0);
	return 0;
}