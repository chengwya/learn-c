#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
int main()
{
	//һά����
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(a + 0));
	//printf("%d\n", sizeof(*a));
	//printf("%d\n", sizeof(a + 1));
	//printf("%d\n", sizeof(a[1]));
	//printf("%d\n", sizeof(&a));
	//printf("%d\n", sizeof(*&a));
	//printf("%d\n", sizeof(&a + 1));
	//printf("%d\n", sizeof(&a[0]));
	//printf("%d\n", sizeof(&a[0] + 1));

	//�ַ�����
	char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 0));
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr + 1));
	//printf("%d\n", sizeof(&arr[0] + 1));

	printf("%d\n", strlen(arr));      //���ֵ
	printf("%d\n", strlen(arr + 0));    //���ֵ
	//printf("%d\n", strlen(*arr));     //err
	//printf("%d\n", strlen(arr[1]));   //err
	printf("%d\n", strlen(&arr));     //���ֵ
	printf("%d\n", strlen(&arr + 1));   //���ֵ-6
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1


	return 0;
}