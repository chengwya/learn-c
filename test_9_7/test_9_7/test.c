#define _CRT_SECURE_NO_WARNINGS 1
//二维数组的创建
/*char arr1[3][4];
double arr2[3][5];
int arr3[5][6];*/

//二维数组的初始化
//int arr4[1][2] = { 1,2 };
//int arr5[2][3] = { {1,5,6},{5,6,7} };
//int arr6[][2] = { 3,5 }; //行可以省略，列不可省略。
//#include <stdio.h>
//
//int main()
//{
//	int arr[3][2] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int arr[3][2] = { {1,2},{3,4},{5,6} };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("arr[%d][%d] = %p\n", i, j, &arr[i][j] );
		}
	}
	return 0;
}