#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	scanf("%d %d", &a, &b);
//	for (i = 1; ;i++)
//	{
//		if (a * i % b == 0)
//		{
//			printf("%d\n", a*i);
//			break;
//		}
//	}
//	return 0;
//}

//2.将一句话的单词进行倒置，标点不倒置。比如I like beijing.经过函数后变为：beijing.like I
//
//输入描述：每个测试输入包含一个测试用例： I like beijing.输入用例不超过100
//
//输出描述：依次输出倒置之后的字符串，以空格分割
//
//输入：
//
//I like beijing.
//
//输出：
//
//beijing.like I


//
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);  //两个参数都是地址，len-1是一个整型变量
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end-1);
//		if (*end == ' ')
//		{
//			start = end + 1;
//		}
//		else
//		{
//			start = end;
//		}
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//
//1.统计二进制中1的个数
//
//写一个函数返回参数二进制中1的个数。
//
//如：15 0000 1111 4个1

//#include <stdio.h>

//int Number(int b)
//{
//	int count = 0;
//	while (b)
//	{
//		if (b % 2 == 1)
//		{
//			count++;
//		}
//		b = b / 2;
//	}
//	return count;
//}

//int Number(int b)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if(((b >> i) & 1 )== 1)
//	{
//		count++;
//	}
//	}
//	return count;
//}

//int main()
//{
//	int a = -1;
	//10000000 00000000 00000000 00000001   原码
	//11111111 11111111 11111111 11111110   反码
	//11111111 11111111 11111111 11111111   补码
	/*int ret = Number(a);
	printf("%d\n", ret);
	return 0;
}*/
//
// 
//2.求两个数二进制中不同位的个数
//
//编程实现：两个int(32位)整数m和n的二进制表达中，有多少个位(bit)不同？
//
//输入：1999 2999 输出：7

//#include <stdio.h>
//
//int Number(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n= n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d %d", &a, &b);
	/*for (i = 0;i < 32;i++)
	{
		if (((a >> i) & 1) != ((b >> i) & 1))
		{
			count++;
		}
	}*/
	/*int ret = a ^ b;
	count = Number(ret);
	printf("%d\n", count);
	return 0;
}*/

//0111 1100 1111
//1011 1011 

//3.打印整数二进制的奇数位和偶数位
//
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印二进制序列

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int i = 0;
//	scanf("%d", &a);
//	
//	//偶数
//	for (i = 31;i >= 1;i -= 2)
//	{
//		printf("%d ",((a>>i) & 1));
//	}
//
//	printf("\n");
//
//	//奇数
//	for (i = 30;i >= 0;i -= 2)
//	{
//		printf("%d ", ((a >> i) & 1));
//	}
//	return 0;
//}
//
//4.交换两个变量(不创建临时变量)
//
//不允许创建临时变量，交换两个整数的内容

#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	printf("%d %d\n", a, b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("%d %d\n",a, b);
	return 0;
}