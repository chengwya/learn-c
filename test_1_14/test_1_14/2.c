#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//static int num = 1; //staticһ��ȫ�ֱ���
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
//	int* p = &a; //a�ĵ�ַ��ֵ��p
//	printf("%p\n",&a); //��%p�ĸ�ʽ��ӡa�ĵ�ַ
//	return 0;
//}

//����ṹ��
struct Stu {
	int id;
	char name[50];
	double score;
	int age;
};

int main()
{
	struct Stu x = { 1,"����",90.5,20 }; //�ṹ���ʼ��
	printf("%d %s %lf %d\n",x.id, x.name, x.score, x.age);
	//.Ϊ�ṹ��Ա���ʲ����� �ṹ�����.��Ա����
	struct Stu *p = &x;
	printf("%d %s %lf %d\n", (*p).id, (*p).name, (*p).score, (*p).age);

	printf("%d %s %lf %d\n", p->id, p->name, p->score, p->age);
	//->������ �ṹ��ָ��->��Ա����
	return 0;
}