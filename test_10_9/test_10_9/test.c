#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//代码3
//int main()
//{
//    int x = 1;
//    int y = 1;
    //请问这里一共打印多少次Hello World ?
    /*for (; x < 5; x++)
    {
        for (; y < 5; y++)
        {
            printf("Hello World!\n");
        }
    }
    return 0;
}*/
//
//#include <stdio.h>
//
//void test(int* p, int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", *(p+i));
//    }
//}
//
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int* p = arr;
//    test(p, sz);
//    return 0;
//}

//#include <stdio.h>
//
//void test(int** p)
//{
//    printf("%d ", **p);
//}
//
//int main()
//{
//    int a = 0;
//    int* n = &a;
//    int** nn = &n;
//    test(&n);
//    test(nn);
//    return 0;
//}
//
//#include <stdio.h>
//
//void test()
//{
//    printf("Hello World！\n");
//}
//
//int main()
//{
//    printf("%p\n", test);
//    printf("%p\n", &test);
//    return 0;
//}
#include <stdio.h>

void test(int arr[2][3])  //√
{}
void test(int arr[][])    //×
{}
void test(int arr[][5])   //√
{}
void test(int* arr)       //×
{}
void test(int* arr[5])    //×
{}
void test(int(*arr)[5])  //√
{}
void test(int** arr)      //×  一级指针 -> 二级指针 匹配不上
{}

int main()
{
    int arr[2][3] = { 0 };
    test(arr);
    return 0;
}