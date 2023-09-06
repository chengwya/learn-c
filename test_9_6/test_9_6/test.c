#define _CRT_SECURE_NO_WARNINGS 1

//��ŵ�����⣨�ݹ�ʵ�֣�
//˼·��1.��A��n-1�����ӷ���B�У�ʣ�����һ������n�������ӷ���C�С�2.��B��n-1�����ӷ���A�У�ʣ�����һ������n��������C�С�

#include <stdio.h>

void move(char x, char y)
{
	printf("%c -> %c\n", x, y);
}

void Hanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		move(a, c);
	}
	else
	{
		Hanoi(n - 1, a, c, b);
		move(a, c);
		Hanoi(n - 1, b, a, c);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	Hanoi(n, 'a', 'b', 'c');
	return 0;
}


//������̨�����⣨�ݹ�ʵ�֣�
//һֻ����һ�ο�����һ��̨�׻����̨�׺�����̨�ס�
//��N=1ʱ����1��������
//��N=2ʱ�����ȿ���������һ��̨�׻�һ������̨�ף���2������
//��N=3ʱ�����ȿ�����һ��һ��̨�ף�ʣ�¶���̨�ף�N=2ʱ����������������һ������̨�ף�һ����������һ�ζ���̨�ף�ʣ��һ��̨�ף�N=1ʱ����1�������������ַ���
//��N=4ʱ�����ȿ�����һ��һ��̨�ף�ʣ������̨�ף�N=3ʱ����4����������һ�ζ���̨�ף�ʣ�¶���̨�ף�N=2ʱ����2����������һ������̨�ף�ʣ��һ��̨��,N=1ʱ��1����������7�ַ���.
//#include <stdio.h>
//
//int dance_step(int n)
//{
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//	if (n == 3)
//		return 4;
//	if (n > 3)
//		return dance_step(n - 1) + dance_step(n - 2) + dance_step(n - 3);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = dance_step(n);
//	printf("%d\n", sum);
//	return 0;
//}
