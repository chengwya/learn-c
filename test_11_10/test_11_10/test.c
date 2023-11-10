#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <windows.h>
//
//int main()
//{
//	FILE* pf = fopen("text.txt", "w");
//	fputs("hello", pf);
//	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
//	Sleep(10000);
//	printf("ˢ�»�����\n");
//	fflush(pf); //ˢ�»�����ʱ���Ž����������������д���ļ������̣�
//	//fflush �ڸ߰汾��VS�ϲ���ʹ����
//	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
//	Sleep(10000);
//	fclose(pf);
//	//fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
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