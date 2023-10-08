#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("arr  =  %p\n", arr);
//	printf("&arr = %p\n", &arr);
//
//	printf("arr+1 = %p\n", arr+1);
//	printf("&arr+1 = %p\n", &arr+1);
//	return 0;
//}

//#include <stdio.h>
//
//void print(int (*arr)[3], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6,};
//	print(arr, 2, 3);
	//二维数组的首元素的地址是二维数组的第一行
	//传arr相当于传第一行的地址，为一维数组的地址
	//可以用数组指针来接收
//	return 0;
//}

#include <stdio.h>

void test1(int arr1[])     //1
{}

void test1(int arr1[10])   //2
{}

void test1(int *arr1)      //3
{}

void test2(int *arr2[10])  //4
{}

void test2(int **arr2)     //5
{}

int main()
{
	int arr1[10] = { 0 };
	int *arr2[10] = { 0 };
	test1(arr1);
	test2(arr2);
	return 0;
}