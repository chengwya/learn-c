#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//struct s
//{
//	char c;
//	int a;
//	char b;
//};
//
//struct s
//{
//	char c;
//	char b;
//	int a;
//};
//#include <stdio.h>
//
////��ϰ1
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
////��ϰ2
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
////��ϰ3
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//
////��ϰ4-�ṹ��Ƕ������
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));//12
//	printf("%d\n", sizeof(struct S2));//8
//	printf("%d\n", sizeof(struct S3));//16
//	printf("%d\n", sizeof(struct S4));//32
//	return 0;
//}

#include <stdio.h>

#pragma pack(1)  //���ö�����Ϊ1
struct s1 
{
	char a;
	int b;
	char c;
};
#pragma pack(0)  //ȡ�����ö���������ԭΪĬ�ϡ�

#pragma pack(2)
struct s2
{
	char a;
	int b;
	char c;
};
#pragma pack(0)

int main()
{
	printf("%d\n", sizeof(struct s1));
	printf("%d\n", sizeof(struct s2));
	return 0;
}