#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//struct Book
//{
//	char BookName[20];
//	int BookId;
//	int price;
//};

//�����ṹ������  
//ע�⣺ֻ��ʹ��һ�Σ����ľ����ԡ�
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
//	struct Node* n;  //[������ | ָ����]
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
}p1;        //�������͵�ͬʱ�������p1
struct p p2;//����ṹ�����p2

struct p p3 = { 0 ,0 }; //�ṹ�������ʼ��

struct Student
{
	char name[20];
	int age;
	int id;
	char sex[5];
};

struct Student s1 = { "С��", 18, 123456, "��" }; //��ʼ��

struct Node
{
	int data;
	struct p p4;
	struct Node* n;
}n1 = { 9, {3, 1}, NULL }; //�ṹ��Ƕ�׳�ʼ��
int main()
{
	struct Student s2 = { "С��", 18, 123457, "Ů" }; //��ʼ��
	struct Node* n2 = &n1;
	//.
	//->
	printf("%s %d %d %s\n",s2.name, s2.age, s2.id, s2.sex);
	printf("%d %d %d %p\n",n2->data, n2->p4.x, n2->p4.y, n2->n);
	return 0;
}