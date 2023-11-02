#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	int* p = (int*)malloc(INT_MAX/ 2);
//	*p = 10; //如果p的值为NULL,会出现问题。
//	free(p);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return;
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);  //这种做法是错误的，
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10);
//	p++;
//	free(p); //此时p不再指向初始地址.
//	return 0 ;
//}

//int main()
//{
//	int* p = (int*)malloc(10);
//	free(p);
//	free(p); //重复释放
//	return 0;
//}

//void test()
//{
//	int* p = (int*)malloc(100);
//	if (p != NULL)
//	{
//		*p = 10;
//	}
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//struct S
//{
//	int a;
//	int arr[];  //柔性数组
//};

//typedef struct s_ct
//{
//	int a;
//	int arr[0];
//}ct_a;
//
//int main()
//{
//	printf("%d\n", sizeof(ct_a));  //通过以上的描述，可以知道这里输出的是4.
//	return 0;
//}
//printf("%d\n",sizeof(ct_a));

//typedef struct s_ct
//{
//	int a;
//	int arr[0];
//}ct_a;
//
//int main()
//{
//	ct_a* p = (ct_a*)malloc(sizeof(ct_a) + 10*sizeof(int));
//	p->a = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

typedef struct s_ct
{
	int a;
	int *pa;
}ct_a;

int main()
{
	ct_a* p = (ct_a*)malloc(sizeof(ct_a));
	p->a = 10;
	p->pa = (ct_a*)malloc(p->a * sizeof(int));
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		p->pa[i] = i;
	}
	free(p->pa);
	p->pa = NULL;
	free(p);
	p = NULL;
	return 0;
}