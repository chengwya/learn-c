#define _CRT_SECURE_NO_WARNINGS 1

//汉诺塔问题（递归实现）
//思路：1.将A中n-1个盘子放入B中，剩下最后一个（第n个）盘子放入C中。2.将B中n-1个盘子放入A中，剩下最后一个（第n个）放入C中。

#include <stdio.h>

void move(char x, char y)
{
	printf("%c -> %c\n", x, y);
}

void Hanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		move(a, c);
	}
	else
	{
		Hanoi(n - 1, a, c, b);
		move(a, c);
		Hanoi(n - 1, b, a, c);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	Hanoi(n, 'a', 'b', 'c');
	return 0;
}


//青蛙跳台阶问题（递归实现）
//一只青蛙一次可以跳一级台阶或二级台阶和三级台阶。
//当N=1时，有1种跳法。
//当N=2时，首先可以跳两个一级台阶或一个二级台阶，有2种跳法
//当N=3时，首先可以跳一次一级台阶，剩下二级台阶，N=2时，有两种跳法。跳一次三级台阶，一种跳法。跳一次二级台阶，剩下一级台阶，N=1时，有1种跳法，则共四种方法
//当N=4时，首先可以跳一次一级台阶，剩下三级台阶，N=3时，有4种跳法。跳一次二级台阶，剩下二级台阶，N=2时，有2种跳法。跳一次三级台阶，剩下一级台阶,N=1时，1种跳法。则共7种方法.
//#include <stdio.h>
//
//int dance_step(int n)
//{
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//	if (n == 3)
//		return 4;
//	if (n > 3)
//		return dance_step(n - 1) + dance_step(n - 2) + dance_step(n - 3);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = dance_step(n);
//	printf("%d\n", sum);
//	return 0;
//}
