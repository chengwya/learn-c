#define _CRT_SECURE_NO_WARNINGS 1
////������λ���������Ӵ�С���
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		d = a;
//		a = b;
//		b = d;
//	}
//	if (a < c)
//	{
//		d = a;
//		a = c;
//		c = d;
//	}
//	if (b < c)
//	{
//		d = b;
//		b = c;
//		c = d;
//	}
//	printf("%d%d%d",a, b, c);
//	return 0;
//}


////��ӡ1-100֮������3�ı�������
//#include <stdio.h>
//int main()
//{
//	for (int i = 1;i <= 100;i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////���������������������������Լ��
//#include <stdio.h>
//int main()
//{
	//int m = 0;
	//int n = 0;
	//int min = 0;
//	scanf("%d%d", &m, &n);
//	if (m < n)
//		min = m;
//	else
//		min = n;
//	while (1)
//	{
//		if (m % min == 0 && n % min == 0)
//			break;
//		else
//			min--;
//	}
//	printf("�������Ϊ%d", min);
//	return 0;
//}

//շת�����
#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int min = 0;
	scanf("%d%d", &m, &n);
	while (m%n)
	{
		min = m % n;
		m = n;
		n = min;
	}
	/*while (1)
	{
		min = m % n;
		if (min != 0)
		{
			m = n;
			n = min;
		}
		else
			break;
	}*/

	printf("�������Ϊ%d", min);
	return 0;
}

//��ӡ1000��-2000��֮�������
//���꣺1.�ܱ�4���������ܱ�100���� 2.�ܱ�400����
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//		else
//			continue;
//	}
//	return 0;
//}

////��ӡ100-200֮�������
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//�Ż���
// x = a * b
// a��b֮��һ��������һ�� <= x�Ŀ�ƽ��
// 100 = 50*2 = 25*4 = 10*10
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int sign = 1; //����iΪ����
//		for (j = 2; j <= sqrt(i); j++)  //sqrt��ƽ��������ʹ��ʱ������math.hͷ�ļ�
//		{
//			if (i % j == 0)
//				sign = 0;
//				break;
//		}
//		if (sign == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}