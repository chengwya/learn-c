#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int sum(int x, int y);  //声明 

int main()
{
	int score[5] = { 10,52,60,99,45 }; //定义一个整型数组，元素最多5个 
	for (int i = 0; i < 5; i++)
	{
		printf("%d\t", score[i]);
	}
	return 0;
}



