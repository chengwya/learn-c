#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>

//typedef struct Stu
//{
//	char name[20];
//	char sex[8];
//	int age;
//	char id[10];
//}Stu;

//struct Stu
//{
//	char name[20];  //�ֲ�����
//	char sex[5];
//	int age;
//	char id[10];
//}s;				    //ȫ�ֱ���

/*struct Stu s1;  */    //����ṹ�����s1
/*struct Stu s2 = { "С��","��","20","aw11140551" };*/ //��ʼ��

//struct Point
//{
//	int x;
//	int y;
//};

/*struct Node
{
	int data;
	struct Point p;
	struct Node* nx;
}n1 = { 1,{6,7}, NULL};*/  //�ṹ��Ƕ�׳�ʼ��

/*struct Node n2 = { 2,{9,10},NULL }; */ //�ṹ��Ƕ�׳�ʼ��

#include <stdio.h>

struct Stu
{
	char name[20];  
	int age;
	char id[10];
};

void print1(struct Stu s)
{
	printf("%s &d %s\n", s.name,s.age,s.id);
}

void print2(struct Stu* pa)
{
	printf("%s %d %s\n",pa->name,pa->age,pa->id);
	printf("%s %d %s\n", (*pa).name,(*pa).age,(*pa).id);
}

int main()
{
	struct Stu s = { "С��",18,"ad1254656" };
	print1(s);  //���ṹ��
	print2(&s); //����ַ
	return 0;
}