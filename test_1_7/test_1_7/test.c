#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf(" i = %d\n", i);
//		if (1)
//		{
//			auto int j = 0;  //�Զ�����(�ֲ�����)
//			printf("1. j = %d\n", j);
//			j += 1;
//			printf("2. j = %d\n", j);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	register int x = 0;
//	printf("x = %d\n", &x);
//	//�����ᱨ��register���εı�������ȡ��ַ��
//	//�������еı��������ᱨ��Ŀǰ�õ�vs2019�����ˡ�
//	return 0;
//}

#include <stdio.h>

static int b = 10;

void pt()
{
	static int c = 30;
	printf("c = %d\n", c);
}

int main()

{
	int a = 10;
	printf("a = %d\n",a);
	b = 20;
	printf("b = %d\n", b);

	return 0;
}