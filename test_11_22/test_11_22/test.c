#define _CRT_SECURE_NO_WARNINGS 1

//дһ���꣬���Խ�һ�������Ķ�������������λ��ż��λ������

//#include <stdio.h>
//				//żλ������һλ + ����λ����һλ
//				//���ż��λ				�������λ
//	//10101010101010101010101010101010   //01010101010101010101010101010101
//#define SWAP(N) ((N & 0xaaaaaaaa) >>1) + ((N & 0x55555555) <<1)
//
//int main()
//{
//	int N = 10;
//	int ret = SWAP(N);
//	printf("%d\n", ret);
//	return 0;
//}

//дһ���꣬����ṹ���б���������׵�ַ��ƫ��
//���죺offsetof���ʵ��

//#include <stdio.h>
//
//#define OFFSETOF(struct_name,mem_name) (int)&(((struct_name*)0)->mem_name)
//
//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct A, a));
//	printf("%d\n", OFFSETOF(struct A, b));
//	printf("%d\n", OFFSETOF(struct A, c));
//	printf("%d\n", OFFSETOF(struct A, d));
//	return 0;
//}

//#include <stdio.h>
//
//#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
//
//int main()
//{
//	int x = 5;
//	int y = 8;
//	int z = MAX(x++, y++);
//	printf("x=%d y=%d z=%d\n", x, y, z);
//	return 0;
//}

