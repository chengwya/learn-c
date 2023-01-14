#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//static int num = 1; //static一个全局变量
//
//static int Max(int x , int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//	return 0;
//}

//int Add(int x, int y)
//{
//	static int z = 1;
//	x += 3;
//	y *= 2;
//	z += 1;
//	int sum = x + y + z;
//	return sum;
//}

//int main()
//{
//	int a = 1;
//	int* p = &a; //a的地址赋值给p
//	printf("%p\n",&a); //以%p的格式打印a的地址
//	return 0;
//}

//定义结构体
struct Stu {
	int id;
	char name[50];
	double score;
	int age;
};

int main()
{
	struct Stu x = { 1,"李四",90.5,20 }; //结构体初始化
	printf("%d %s %lf %d\n",x.id, x.name, x.score, x.age);
	//.为结构成员访问操作符 结构体变量.成员变量
	struct Stu *p = &x;
	printf("%d %s %lf %d\n", (*p).id, (*p).name, (*p).score, (*p).age);

	printf("%d %s %lf %d\n", p->id, p->name, p->score, p->age);
	//->操作符 结构体指针->成员变量
	return 0;
}