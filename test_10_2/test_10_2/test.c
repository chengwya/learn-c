#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//{
//	char ch = 'h';
//	char* pa = &ch;
//	*pa = 'l';
//	return 0;
//}

//int main()
//{
//	const char* pa = "Hello World";  //��ʱ�ǰ�һ���ַ�������ָ�����������
//	printf("%s\n", pa);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

int* arr1[3];   //����ָ�������
char* arr2[5];  //һ���ַ�ָ�������
char** arr3[4]; //�����ַ�ָ�������