#define _CRT_SECURE_NO_WARNINGS 1

//1.题目名称：计算求和
//
//题目内容：求Sn = a + aa + aaa + aaaa + aaaaa的前五项之和，其中a是一个数字。
//
//例如：2 + 22 + 222 + 2222 + 22222

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + 2;
//		sum += ret;
//	}
//	printf("sum的值为：%d", sum);
//	return 0;
//}

//2.题目名称：打印数组内容
//
//题目内容：写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整形一维数组。

#include <stdio.h>

void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\n");
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	return 0;
}