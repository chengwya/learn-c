#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	scanf("%d %d", &a, &b);
//	for (i = 1; ;i++)
//	{
//		if (a * i % b == 0)
//		{
//			printf("%d\n", a*i);
//			break;
//		}
//	}
//	return 0;
//}

//2.��һ�仰�ĵ��ʽ��е��ã���㲻���á�����I like beijing.�����������Ϊ��beijing.like I
//
//����������ÿ�������������һ������������ I like beijing.��������������100
//
//��������������������֮����ַ������Կո�ָ�
//
//���룺
//
//I like beijing.
//
//�����
//
//beijing.like I


//
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);  //�����������ǵ�ַ��len-1��һ�����ͱ���
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end-1);
//		if (*end == ' ')
//		{
//			start = end + 1;
//		}
//		else
//		{
//			start = end;
//		}
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//
//1.ͳ�ƶ�������1�ĸ���
//
//дһ���������ز�����������1�ĸ�����
//
//�磺15 0000 1111 4��1

//#include <stdio.h>

//int Number(int b)
//{
//	int count = 0;
//	while (b)
//	{
//		if (b % 2 == 1)
//		{
//			count++;
//		}
//		b = b / 2;
//	}
//	return count;
//}

//int Number(int b)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if(((b >> i) & 1 )== 1)
//	{
//		count++;
//	}
//	}
//	return count;
//}

//int main()
//{
//	int a = -1;
	//10000000 00000000 00000000 00000001   ԭ��
	//11111111 11111111 11111111 11111110   ����
	//11111111 11111111 11111111 11111111   ����
	/*int ret = Number(a);
	printf("%d\n", ret);
	return 0;
}*/
//
// 
//2.���������������в�ͬλ�ĸ���
//
//���ʵ�֣�����int(32λ)����m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//
//���룺1999 2999 �����7

//#include <stdio.h>
//
//int Number(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n= n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d %d", &a, &b);
	/*for (i = 0;i < 32;i++)
	{
		if (((a >> i) & 1) != ((b >> i) & 1))
		{
			count++;
		}
	}*/
	/*int ret = a ^ b;
	count = Number(ret);
	printf("%d\n", count);
	return 0;
}*/

//0111 1100 1111
//1011 1011 

//3.��ӡ���������Ƶ�����λ��ż��λ
//
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ����������

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int i = 0;
//	scanf("%d", &a);
//	
//	//ż��
//	for (i = 31;i >= 1;i -= 2)
//	{
//		printf("%d ",((a>>i) & 1));
//	}
//
//	printf("\n");
//
//	//����
//	for (i = 30;i >= 0;i -= 2)
//	{
//		printf("%d ", ((a >> i) & 1));
//	}
//	return 0;
//}
//
//4.������������(��������ʱ����)
//
//����������ʱ������������������������

#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	printf("%d %d\n", a, b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("%d %d\n",a, b);
	return 0;
}