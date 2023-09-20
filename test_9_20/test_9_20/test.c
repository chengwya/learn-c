#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
	/*char* pa = NULL;
	int* pb = NULL;
	short* pc = NULL;
	long* pd = NULL;
	float* pe = NULL;
	double* pf = NULL;*/

	/*int x = 5;
	int* pa = &x;
	char* pb = (char*)&x;

	printf("%p\n",pa);
	printf("%p\n", pa+1);
	printf("%p\n", pb);
	printf("%p\n", pb+1);*/

	/*int i = 0x12223242;
	char* pa = (char*)&i;   
	int* pb = &i;         */                
	//*pa = 0; //注意观察调试的过程中内存的变化
	//*pb = 0; //注意观察调试的过程中内存的变化
	//调试->窗口->内存
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int *n;  //局部指针变量未初始化，默认
//	*n = 8;
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr;
//	for (int i = 0;i < 11;i++)
//	{
//		//当指针指向的范围超过arr的范围时，p就是野指针
//		*(pa++) = i;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int* test()
//{
//	int a = 2;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int* p = NULL;
//	int a = 2;
//	p = &a;
//	if (p != NULL)
//	{
//		*p = 4;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//#define x_num 5
//
//int main()
//{
//	float num[x_num];
//	float* p;
//	for (p = &num[x_num]; p > &num[0]; p--)
//	{
//		*p = 0;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int mystrlen(char* x)
//{
//	char* n = x;
//	while (*n != '\0')
//	{
//		n++;
//	}
//	return n - x;
//}
//
//int main()
//{
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);*/
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int a = 2;
	int* pa = &a;
	int** ppa = &pa;
	return 0;
}