#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//void print(int n);
//
//int main()
//{
//
//	print(3);
//	return;
//}
///*����ֵ���� ������([�β��б�])
//{
//	������
//}*/
//void print(int n)
//{
//	printf("%d ", n); //�����
//}
////void ��������
////print ������
////n ��������


//#include <stdio.h>
//
//void get_max(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 25;
//	get_max(a, b);
//	return 0;
//}
//
//void get_max(int x, int y)
//{
//	int max = 0;
//		if (x > y)
//		{
//			max = x;
//		}	
//		else
//		{
//			max = y;
//		}
//		printf("���ֵ=%d", max);
//}

#include <stdio.h>

void swap2(int* pa, int* pb);
void swap1(int x, int y);

int main()
{
	int a = 10;
	int b = 25;
	swap1(a, b);
	printf("swap1:a=%d,b=%d\n", a, b);
	swap2(&a, &b);
	printf("swap2:a=%d,b=%d\n", a, b);
	return 0;
}

void swap1(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}

void swap2(int* pa, int* pb)
{
	int c = 0;
	c = *pa;
	*pa = *pb;
	*pb = c;
}