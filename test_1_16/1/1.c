#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//单分支
//int main()
//{
//	int x = 2;
//	if (x = 2)
//	{
//		printf("%d\n", x);
//	}
//	return 0;
//}

//多分支
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x >= 0)
//	{
//		printf("正数");
//	}
//	else
//	{
//		printf("负数");
//	}
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x <= 40)
//	{
//		printf("差!\n");
//	}
//	else if (x <= 60)
//	{
//		printf("良");
//	}
//	else if (x <= 100)
//	{
//		printf("优");
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
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//	printf("双休日");
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
		printf("星期一");
		break;
	case 2:
		printf("星期二");
		break;
	case 3:
		printf("星期三");
		break;
	case 4:
		printf("星期四");
		break;
	case 5:
		printf("星期五");
		break;
	case 6:
		printf("星期六");
		break;
	case 7:
		printf("星期日");
		break;
	}
	return 0;
}