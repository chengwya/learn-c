#define _CRT_SECURE_NO_WARNINGS 1

//1.��Ŀ���ƣ����Ͼ���
//��Ŀ���ݣ���һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��o(N);

//1 2 3 
//4 5 6
//7 8 9

//#include <stdio.h>
//
//int find_num(int arr[][3], int row, int col, int key)
//{
//	int i = 0;
//	int j = col-1;
//	while (i<row && j>=0)
//	{
//		if (arr[i][j] > key)
//		{
//			j--;
//		}
//		else if (arr[i][j] < key)
//		{
//			i++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 12;
//	int ret = find_num(arr,3,3,k);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}

//2.��Ŀ���ƣ��ַ�������
//��Ŀ���ݣ�ʵ��һ�����������������ַ����е�k���ַ���
//����
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//#include <stdio.h>
//
//void string_left_rotate(char* str, int k)
//{
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *str;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "ABCD";
//	int k = 1;
//
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//3.��Ŀ���ƣ��ַ����������
//��Ŀ���ݣ�дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//��������s1 = AABCD��s2 = BCDAA, ����1
//����s1 = abcd��s2 = ACBD, ����0
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

//#include <stdio.h>
//#include <string.h>
//
//int is_string_left_rotate(char* str1, char* str2)
//{
//	int i = 0;
//	int len = strlen(str1);
//	for (i = 0; i < len; i++)
//	{
//		char tmp = *str1;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		*(str1 + len - 1) = tmp;
//
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[10] = "AABCD";
//	char arr2[10] = "BCDAA";
//	int ret = is_string_left_rotate(arr1,arr2);
//	if (ret == 1)
//	{
//		printf("YES\n");
//	}
//	else
//		printf("NO\n");
//	return 0;
//}

#include <stdio.h>
#include <string.h>

int is_string_left_rotate(char* str1, char* str2)
{
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	int len = strlen(str1);
	strncat(str1, str1, len);
	char* ret = strstr(str1, str2);
	return ret != NULL;
	/*if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}*/
}

int main()
{
	char arr1[20] = "AABCD";
	char arr2[20] = "BCDAA";
	int ret = is_string_left_rotate(arr1, arr2);
	if (ret == 1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}