#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////ʹ��whileѭ����ʵ����ͬ�Ĺ���
//int main()
//{
//	int i = 0; //ѭ��������ʼ������
//	while (i < 5) //�����жϲ���
//	{
//		printf("%d ",i);
//		i++; //��������
//	}
//}

//#include <stdio.h>
////ʹ��forѭ����ʵ����ͬ����
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int x = 3;
//	for (x = 0; x <= 5; x++)
//	{
//		if (x == 3)
//		{
//			break;
//		}
//		printf("%d ", x);
//	}
//	return 0;
//}
//int main()
//{
//	//ǰ�պ�����д��
//	int i = 0;
//	for ( i=1; i<5; i++)
//
//	//ǰ���Ϊ������
//	for( i=1; i<=4; i++)
//	return 0;
//}


//#include <stdio.h>
////����1
//int main()
//{
//	for (;;) //forѭ���еĳ�ʼ�����֡������жϲ��ֺ͵��������ǿ���ʡ�Եģ����������ѧ��ʹ�ã����׳����⡣
//	{
//		printf("Hello World!");
//	}
//	return 0;
//}

//#include <stdio.h>
////����2
//int main()
//{
//	int num = 0; //����
//	int x = 0;
//	int y = 0;
//	//��������һ����ӡ���ٴ�Hello World ?
//	for (x = 1; x < 5; x++)
//	{
//		for (y = 1; y < 5; y++)
//		{
//			printf("Hello World!\n");
//			num++;
//		}
//		printf("%d",num);
//	}
//	return 0;
//}

//#include <stdio.h>
////����3
//int main()
//{
//	int x = 1;
//	int y = 1;
//	//��������һ����ӡ���ٴ�Hello World ?
//	for (; x < 5; x++)
//	{
//		for (; y < 5; y++)
//		{
//			printf("Hello World!\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
////����4
//int main()
//{
//	int x = 0;
//	int y = 0;
//	//ʹ�ö���һ����������ѭ��
//	for (x = 1, y = 3; x < 5 && y>0; x++, y++)
//	{
//		printf("Hello world\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int x = 0;
//	do
//	{
//		printf("Hello World\n");
//	} while (x > 0);
//	return 0;
//}

//#include <stdio.h>
////����1
//int main()
//{
//	int x = 5;
//	do
//	{
//		if (x == 3)
//			break;
//		printf("%d ", x);
//		x--;
//	} while (x > 0);
//	return 0;
//}

#include <stdio.h>
//����2
int main()
{
	int x = 5;
	do
	{
		if (x == 3)
			continue;
		printf("%d ", x);
		x--;
	} while (x > 0);
	return 0;
}