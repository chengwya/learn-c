#define _CRT_SECURE_NO_WARNINGS 1

//写一个宏，可以将一个整数的二进制数的奇数位和偶数位交换。

//#include <stdio.h>
//				//偶位数右移一位 + 奇数位左移一位
//				//获得偶数位				获得奇数位
//	//10101010101010101010101010101010   //01010101010101010101010101010101
//#define SWAP(N) ((N & 0xaaaaaaaa) >>1) + ((N & 0x55555555) <<1)
//
//int main()
//{
//	int N = 10;
//	int ret = SWAP(N);
//	printf("%d\n", ret);
//	return 0;
//}

//写一个宏，计算结构体中变量相对于首地址的偏移
//考察：offsetof宏的实现

//#include <stdio.h>
//
//#define OFFSETOF(struct_name,mem_name) (int)&(((struct_name*)0)->mem_name)
//
//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct A, a));
//	printf("%d\n", OFFSETOF(struct A, b));
//	printf("%d\n", OFFSETOF(struct A, c));
//	printf("%d\n", OFFSETOF(struct A, d));
//	return 0;
//}

//#include <stdio.h>
//
//#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
//
//int main()
//{
//	int x = 5;
//	int y = 8;
//	int z = MAX(x++, y++);
//	printf("x=%d y=%d z=%d\n", x, y, z);
//	return 0;
//}

