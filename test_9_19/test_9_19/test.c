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
	int a = 5;   //���ڴ��п���һ��ռ�
	int* p = &a; //a���ڴ�ռ�Ϊ4���ֽڣ����ｫ��һ���ֽڵĵ�ַ�����p�����У���p����һ��ָ�������
				 //ʹ��&��ȡ��a�ĵ�ַ����p��
	return 0;
}