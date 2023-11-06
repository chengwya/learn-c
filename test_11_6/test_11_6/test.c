#define _CRT_SECURE_NO_WARNINGS 1

//struct _iobuf {
//		char* _ptr;
//		int   _cnt;
//		char* _base;
//		int   _flag;
//		int   _file;
//		int   _charbuf;
//		int   _bufsiz;
//		char* _tmpfname;
//};
//typedef struct _iobuf File;

//FILE* pf; //文件指针变量
//
//FILE* fopen(const char* filename, const char* mode);
//
//int fclose(FILE* stream);


#include <stdio.h>

int main()
{
	FILE* pf;
	pf = fopen("test.txt","w");
	if (pf != NULL)
	{
		fputs("Hello World",pf);

		fclose(pf);
	}
	return 0;
}