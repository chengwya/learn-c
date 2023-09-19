#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", sizeof arr);
//	printf("%d\n", sizeof arr[0]);
//
//	return 0;
//}

#include <stdio.h>

int main()
{
	int a = 5;   //在内存中开辟一块空间
	int* p = &a; //a的内存空间为4个字节，这里将第一个字节的地址存放在p变量中，则p就是一个指针变量。
				 //使用&，取出a的地址放入p中
	return 0;
}