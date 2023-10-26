#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//struct Node
//{
//	int date[100];
//	int num;
//};
//
//struct Node n = { {1,2,3,4,5,6}, 7 };
//
//void print1(struct Node n)
//{
//	printf("%d\n", n.num);
//}
//
//void print2(struct Node* n)
//{
//	printf("%d\n", n->num);
//}
//
//int main()
//{
//	print1(n);
//	print2(&n);
//	return 0;
//}
//
//#include <stdio.h>
//
//struct E
//{
//	int _a : 1;
//	int _b : 5;
//	int _c : 10;
//	int _d : 20;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct E));  //8
//	return 0;
//}

#include <stdio.h>

struct X
{
	char a : 3;
	char b : 5;
	char c : 2;
	char d : 4;
};

struct X x = { 0 };



int main()
{
	x.a = 12;
	x.b = 16;
	x.c = 9;
	x.d = 8;
	printf("%d\n", sizeof(struct X));
	return 0;
}