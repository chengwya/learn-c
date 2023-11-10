#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <windows.h>
//
//int main()
//{
//	FILE* pf = fopen("text.txt", "w");
//	fputs("hello", pf);
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf); //刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//	//fflush 在高版本的VS上不能使用了
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//fclose在关闭文件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}

#include <stdio.h>

int main()
{
	int ch = 0;
	FILE* pf = fopen("text.txt","r");
	if (!pf)
	{
		perror("fopen");
		return;
	}

	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
	}

	printf("\n");

	if (ferror(pf))
	{
		puts("error\n");
	}
	else if (feof(pf))
	{
		puts("success\n");
	}
	return 0;
}