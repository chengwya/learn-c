#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct Book
//{
//	char BookName[20];
//	int BookId;
//	int price;
//};

//匿名结构体类型  
//注意：只能使用一次，它的局限性。
//struct
//{
//	int a;
//	char ch;
//	double b;
//}n;
//
//struct
//{
//	int a;
//	char ch;
//	double b;
//}*p;

//struct Node
//{
//	int data;
//	struct Node n;
//};
//
//
//struct Node
//{
//	int data;
//	struct Node* n;  //[数据域 | 指针域]
//};

//typedef struct
//{
//	int data;
//	Node* n;
//}Node;
//
//typedef struct Node
//{
//	int data;
//	struct Node* n;
//}Node;

struct p
{
	int x;
	int y;
}p1;        //声明类型的同时定义变量p1
struct p p2;//定义结构体变量p2

struct p p3 = { 0 ,0 }; //结构体变量初始化

struct Student
{
	char name[20];
	int age;
	int id;
	char sex[5];
};

struct Student s1 = { "小明", 18, 123456, "男" }; //初始化

struct Node
{
	int data;
	struct p p4;
	struct Node* n;
}n1 = { 9, {3, 1}, NULL }; //结构体嵌套初始化
int main()
{
	struct Student s2 = { "小红", 18, 123457, "女" }; //初始化
	struct Node* n2 = &n1;
	//.
	//->
	printf("%s %d %d %s\n",s2.name, s2.age, s2.id, s2.sex);
	printf("%d %d %d %p\n",n2->data, n2->p4.x, n2->p4.y, n2->n);
	return 0;
}