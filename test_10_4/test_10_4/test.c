#define _CRT_SECURE_NO_WARNINGS 1

//题目名称：调整奇数偶数顺序
//
//题目内容：调整数组使奇数全部都位于偶数前面。
//
//输入一个整数数组，实现一个函数
//
//来调整该数组中数字的顺序使得数组中的奇数位于数组的前半部分，所有偶数位于数组的后半部分。

//#include <stdio.h>
//
//void  Reorder(int arr[], int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		while (left<right && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while (left<right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = 0;
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Reorder(arr, sz);
//	return 0;
//}

//.题目名称：猜凶手
//
//题目内容：日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//
//以下为4个嫌疑犯的供词：
//
//A说：不是我。
//
//B说：是C。
//
//C说：是D。
//
//D说：C在胡说。
//
//已知3个人说了真话，1个人说的是假话。
//
//现在请根据这些信息，写一个程序来确定到底谁是杀手。

//#include <stdio.h>
//
//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}

//3.题目名称：猜名次
//
//题目内容：5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//
//A选手说：B第二，我第三；
//
//B选手说：我第二，E第四；
//
//C选手说：我第一，D第二；
//
//D选手说：C最后，我第三；
//
//E选手说：我第四，A第一；
//
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						   {
//							if(a * b * c * d * e == 120)
//						   printf("a=%d b=%d c=%d d=%d e=%d ",a, b, c, d, e);
//						    }
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//1.题目名称：杨辉三角
//
//题目内容：在屏幕上打印杨辉三角。
//
//1
//1 1
//1 2 1
//1 3 3 1

//
//#include <stdio.h>
//
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//6.题目名称：喝汽水问题
//
//题目内容：喝汽水，一瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水。

//#include <stdio.h>
//
//int main()
//{
//	int money = 20;
//	int total = money;;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}
//
//4.题目名称：字符串逆序
//
//题目内容：写一个函数，可以逆序一个字符串的内容。

//#include <stdio.h>
//
//void reverse(char* arr, int len)
//{
//	char* left = arr;
//	char* right = arr + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = strlen(arr);
//	reverse(arr, len);
//	printf("%s", arr);
//	return 0;
//}

//3.题目名称：打印水仙花数
//
//题目内容：求出0~100000之间的所有”水仙花数“并输出。
//
//“水仙花数”是指一个n位数，其各位数字的n次方之和等于该数本身。
//
//如：153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3, 则153是一个水仙花数。

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}

//5.题目名称：打印菱形
#include <stdio.h>

int main()
{
	int i = 0;
	int line = 0;
	scanf("%d", &line);
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j<line -1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}