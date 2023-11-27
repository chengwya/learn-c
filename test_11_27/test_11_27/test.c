#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%15d\n", 0xABCDEF);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("\n%d", printf("Hello world!"));
//	return 0;
//}

#include <stdio.h>

int main()
{
	int id = 0;
	float c_score = 0;
	float math_score = 0;
	float eng_score = 0;

	scanf("%d;%f,%f,%f", &id, &c_score, &math_score, &eng_score);
	printf("The each subject score of of No. %d is %.2f, %.2f, %.2f.", id, c_score, math_score, eng_score);
	return 0;
}