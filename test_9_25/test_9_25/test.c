#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    int sum = 0;
//    int ret = 1;
//    scanf("%d", &n);
//    for (i = 1;i <= n;i++)
//    {
//        ret = 1;
//        for (j = 1;j <= i;j++)
//        {
//            ret *= j;
//        }
//        sum += ret;
//    }
//    printf("sum=%d\n", sum);
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    int arr[10] = { 0 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("Hello\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//
//char* MyStrcpy(char* destination,const char* source)  //返回的是目标空间的起始地址
//{
//	assert(destination != NULL);  //断言
//	assert(source != NULL);
//	char* ret = destination;
//	while (*destination++ = *source++)
//	{
//		;
//	}
//	return ret;  //返回目标空间的起始地址
//}
//
//int main()
//{
//	char arr1[] = "HHHHHello";
//	char arr2[] = "World!";
//	printf("%s\n", MyStrcpy(arr1, arr2));
//	return 0;
//}

#include <stdio.h>

void test1()
{
	int a = 10;
	int b = 20;
	int* p = &a;
	*p = 20;
	p = &b;
}

void test2()
{
	int a = 10;
	int b = 20;
	const int* p = &a;
	*p = 20;
	p = &b;
}

void test3()
{
	int a = 10;
	int b = 20;
	int* const p = &a;
	*p = 20;
	p = &b;
}

int main()
{
	//无const
	test1();

	//const在*左边
	test2();

	//const在*右边
	test3();
}