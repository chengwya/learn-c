#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
	/*int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;*/
	//i = a++||++b||d++; //输出结果为:1 3 3 4
	/*printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);*/
	//输出结果为：1 2 3 4
	//后置++,先使用再++,a为假后面不管为什么都为假，所以后面没有参与运算。
	/*return 0;*/

	/*int a = 5;
	int b = 10;
	int c = 0;
	if (b > a)
	{
		c = b;
	}
	else
	{
		c = a;
	}

	c = a > b ? a : b;*/

	//int a = 1;
	//int b = 3;
	//int c = 0;
	/*c = (++a, b + a, b, a + 4);*/
	/*printf("%d",c);*/

	/*if(a = b/2,b = a+2, a>0)*/

	//a = get();
	//count(a);
	//while (a > 0)
	//{
	//	a = get();
	//	count(a);
	//}

	////使用逗号表达式，改写成：
	//while (a = get(), count(a), a > 0)
	//{
	//	a = get();
	//	count(a);
	//}

	//int arr[3] = { 0 };  //创建个数组
	//arr[2] = 2;			 //引用下标操作符进行赋值
	////[]的两个操作数分别为arr和3.

	
	/*return 0;
}*/

//#include <stdio.h>
//
//void Test()
//{
//	printf("Hello ");
//}
//
//void Test2(char *Str)
//{
//	printf("%s", Str);
//}
//
//int main()
//{
//	Test();
//	Test2("World");
//	return 0;
//}
//
//#include <stdio.h>
//
//
//struct Book
//{
//	char name[20];
//	double price;
//	char id[20];
//};
//
//int main()
//{
//	struct Book b = { "C语言", 58.00, "C15156206"};
//	struct Book *pb = &b;

	/*printf("书名是：<<%s>>，价格是：%lf, 书本编号是：%s\n", b.name, b.price, b.id);*/
	/*printf("书名是：<<%s>>，价格是：%lf, 书本编号是：%s\n", (*pb).name,(*pb).price,(*pb).id);*/
	/*printf("书名是：<<%s>>，价格是：%lf, 书本编号是：%s\n", pb->name, pb->price, pb->id);

	return 0;
}*/
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 13;
//	int n = 1;
//	int count = 0;
//	for (int i = 0;i < 32;i++)
//	{
//		if (n & (a >> i))
//		{
//			count++;
//		}
//	}
//	printf("%d", count );
//	return 0;
//}

#include <stdio.h>

//int main()
//{/*
	/*char a, b, c;
	
	c = a + b;
	printf("%d", c);
	return 0;*/

	//char a = 3;
	//00000000 00000000 00000000 00000011
	//00000011   -   a 
	//char b = 127;
	//00000000 00000000 00000000 01111111
	//01111111   -   b
	/*char c = a + b;*/
	//00000000 00000000 00000000 00000011
	//00000000 00000000 00000000 01111111
	//00000000 00000000 00000000 10000010    //逢二进一

	//10000010   -   c
	//11111111 11111111 11111111 10000010    //补码
	//11111111 11111111 11111111 10000001    //反码  补码-1
	//10000000 00000000 00000000 01111110    //原码  反码取反
	//-126
	//a和b都是char类型，都没有达到一个int的大小，这里就要整型提

 	//printf("%d\n", c); //-126

	/*int main()
	{
		char a = 0xc5;
		short b = 0xc500;
		int c = 0xc5000000;
		if (a == 0xc5)
			printf("A");
		if (b == 0xc500)
			printf("B");
		if (c == 0xc5000000)
			printf("C");
		return 0;*/
	/*}*/


//}
int fun()
{
	static int count = 1;
	return ++count;
}
int main()
{
	int answer;
	answer = fun() - fun() * fun();
	printf("%d\n", answer);//输出多少？
	return 0;
}