#define _CRT_SECURE_NO_WARNINGS 1

//int x = 5; //��ջ�ռ��п����˴�СΪ4���ֽڵĿռ�
//char arr[5] = { 0 }; //��ջ�ռ��Ͽ�����5���������ֽڿռ䡣
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	//1
//	int num = 0;
//	scanf("%d", &num);
//	int arr[num] = { 0 };
//	//2
//	int* ptr = NULL;
//	ptr = (int*)malloc(num * sizeof(int));
//	if (ptr != NULL)
//	{
//		int i = 0;
//		for (i = 0; i < num; i++)
//		{
//			*(ptr + i) = 0;
//		}
//	}
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)calloc(5, sizeof(int));
//	if (p != NULL)
//	{
//		//ʹ�ÿռ�
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//1
	int* ptr = (int*)malloc(100);
	if (ptr != NULL)
	{

	}
	else
	{
		perror(main);
	}
	ptr = realloc(ptr, 1000);


	//2
	int* p = NULL;
	p = (int* )realloc(ptr,1000);
	if (p != NULL)
	{
		ptr = p;
	}
	else
	{
		perror(main);
	}
	free(ptr);
	ptr = NULL;
	return 0;
}