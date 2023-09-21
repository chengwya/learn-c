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
//	char name[20];  //局部变量
//	char sex[5];
//	int age;
//	char id[10];
//}s;				    //全局变量

/*struct Stu s1;  */    //定义结构体变量s1
/*struct Stu s2 = { "小明","男","20","aw11140551" };*/ //初始化

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
}n1 = { 1,{6,7}, NULL};*/  //结构体嵌套初始化

/*struct Node n2 = { 2,{9,10},NULL }; */ //结构体嵌套初始化

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
	struct Stu s = { "小明",18,"ad1254656" };
	print1(s);  //传结构体
	print2(&s); //传地址
	return 0;
}