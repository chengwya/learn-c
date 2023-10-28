#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>

//enum Color
//{
//	GREEN = 2,
//	RED = 3,
//	YELLOW = 4,
//	BLACK = 5
//};
//
//enum Color C = BLACK;
//C = 5; //这种写法是错误的，有类型的差异
//
//enum Day
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};

//union un   //联合体类型的声明
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union un un;
//	
//	printf("%d\n", &(un.i)); //18087412
//	printf("%d\n", &(un.c)); //18087412
//	
//	un.i = 0x11223344;       //11223347
//	un.c = 0x47;             //47
//	printf("%x\n", un.i);
//	printf("%x\n", un.c);
//	return 0;
//}

//#include <stdio.h>
//
//int check_sys()
//{
//	union un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
#include <stdio.h>

union Un1
{
	char c[5];
	int i;
};
union Un2
{
	short c[7];
	int i;
};

int main()
{
	printf("%d\n", sizeof(union Un1)); //8
	printf("%d\n", sizeof(union Un2)); //16
	return;
}
