#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����֧
//int main()
//{
//	int x = 2;
//	if (x = 2)
//	{
//		printf("%d\n", x);
//	}
//	return 0;
//}

//���֧
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x >= 0)
//	{
//		printf("����");
//	}
//	else
//	{
//		printf("����");
//	}
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x <= 40)
//	{
//		printf("��!\n");
//	}
//	else if (x <= 60)
//	{
//		printf("��");
//	}
//	else if (x <= 100)
//	{
//		printf("��");
//	}
//	else
//	{
//		printf("error");
//	}
//	return 0;
//}

//int main()
//{	
//	int x = 3;
//	if (x == 3)
//		printf("YES");
//	else
//		printf("NO");
//
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������");
//		break;
//	case 6:
//	case 7:
//	printf("˫����");
//	break;
//}
//	return 0;
//}


int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����һ");
		break;
	case 2:
		printf("���ڶ�");
		break;
	case 3:
		printf("������");
		break;
	case 4:
		printf("������");
		break;
	case 5:
		printf("������");
		break;
	case 6:
		printf("������");
		break;
	case 7:
		printf("������");
		break;
	}
	return 0;
}