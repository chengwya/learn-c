#define _CRT_SECURE_NO_WARNINGS 1

//��Ŀ���ƣ���������ż��˳��
//
//��Ŀ���ݣ���������ʹ����ȫ����λ��ż��ǰ�档
//
//����һ���������飬ʵ��һ������
//
//�����������������ֵ�˳��ʹ�������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�

//#include <stdio.h>
//
//void  Reorder(int arr[], int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		while (left<right && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while (left<right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = 0;
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Reorder(arr, sz);
//	return 0;
//}

//.��Ŀ���ƣ�������
//
//��Ŀ���ݣ��ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//
//����Ϊ4�����ɷ��Ĺ��ʣ�
//
//A˵�������ҡ�
//
//B˵����C��
//
//C˵����D��
//
//D˵��C�ں�˵��
//
//��֪3����˵���滰��1����˵���Ǽٻ���
//
//�����������Щ��Ϣ��дһ��������ȷ������˭��ɱ�֡�

//#include <stdio.h>
//
//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}

//3.��Ŀ���ƣ�������
//
//��Ŀ���ݣ�5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//
//Aѡ��˵��B�ڶ����ҵ�����
//
//Bѡ��˵���ҵڶ���E���ģ�
//
//Cѡ��˵���ҵ�һ��D�ڶ���
//
//Dѡ��˵��C����ҵ�����
//
//Eѡ��˵���ҵ��ģ�A��һ��
//
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						   {
//							if(a * b * c * d * e == 120)
//						   printf("a=%d b=%d c=%d d=%d e=%d ",a, b, c, d, e);
//						    }
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//1.��Ŀ���ƣ��������
//
//��Ŀ���ݣ�����Ļ�ϴ�ӡ������ǡ�
//
//1
//1 1
//1 2 1
//1 3 3 1

//
//#include <stdio.h>
//
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//6.��Ŀ���ƣ�����ˮ����
//
//��Ŀ���ݣ�����ˮ��һƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ��

//#include <stdio.h>
//
//int main()
//{
//	int money = 20;
//	int total = money;;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}
//
//4.��Ŀ���ƣ��ַ�������
//
//��Ŀ���ݣ�дһ����������������һ���ַ��������ݡ�

//#include <stdio.h>
//
//void reverse(char* arr, int len)
//{
//	char* left = arr;
//	char* right = arr + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = strlen(arr);
//	reverse(arr, len);
//	printf("%s", arr);
//	return 0;
//}

//3.��Ŀ���ƣ���ӡˮ�ɻ���
//
//��Ŀ���ݣ����0~100000֮������С�ˮ�ɻ������������
//
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮�͵��ڸ�������
//
//�磺153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3, ��153��һ��ˮ�ɻ�����

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}

//5.��Ŀ���ƣ���ӡ����
#include <stdio.h>

int main()
{
	int i = 0;
	int line = 0;
	scanf("%d", &line);
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j<line -1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}