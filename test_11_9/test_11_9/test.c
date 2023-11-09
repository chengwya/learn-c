#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("text.txt","w");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return 1;
//	}
//	fputs("Hello World", pf);
//	fseek(pf ,3, SEEK_SET);
//	fputs("hh",pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int sz = 0;
//	FILE* pf = fopen("text.txt","r");
//	if (pf == NULL)
//	{
//		perror(fopen);
//		return;
//	}
//	fseek(pf, 0, SEEK_END);
//	sz = ftell(pf);
//	fclose(pf);
//	pf = NULL;
//	printf("%d", sz);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("text.txt", "w");
//	if (!pf)
//	{
//		perror(fopen);
//		return;
//	}
//	fputs("This is sample", pf);
//	fseek(pf, 6, SEEK_SET);
//	rewind(pf);
//	fputs("ar",pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

#include <stdio.h>

int main()
{
	int n = 10000;
	FILE* pf = fopen("text.txt","wb");
	if (!pf)
	{
		perror(fopen);
		return;
	}
	fwrite(&n, sizeof(int), 1, pf);

	fclose(pf);
	pf = NULL;
	return 0;
}