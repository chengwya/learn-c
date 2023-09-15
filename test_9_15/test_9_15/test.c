#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//int height = 160;
	//height = 180;    //如果对值不满意，可以赋值
	//int weight = 70;
	//weight = 50;

	//赋值操作符可以连续使用，如：
/*	int x = 10;
	int y = 5;
	int z = 2;
	z = y = x + 5; */  //连续赋值

	//同样的语义：
	/*y = x + 5;
	z = y;*/

	//int a = 50;
	//a = a + 5;
	//a += 5;  //符合赋值
	////与其他运算符一样的道理，这样更加简洁。
	
	//int a = 10;
	//
	//printf("%d\n", sizeof(a));    //4
	//printf("%d\n", sizeof(int));  //4
	//printf("%d\n", sizeof a);	  //4
	//printf("%d\n", sizeof int); //语法错误

	
	return 0;
}