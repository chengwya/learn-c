#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	//打印一个单引号’
	printf("'\n");
	//打印一个双引号"
	printf("\"\n"); //需要加一个反斜杠\
	//如果需要打打印一个路径 
	printf("D:/soft/docker"); //打印内容为D:softdocker 
	//"Hello World!";
	//char arr[] = "hello";
	//printf("%s\n", arr);
	//printf("%d\n", strlen(arr)); //strlen计算字符串长度 该长度为5
	//printf("%d\n", sizeof(arr)); //sizeof计算内存中的长度 是有算上\0的 该长度为6
	//return 0;
}