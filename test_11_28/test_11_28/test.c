#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isalpha(ch))
//		{
//			printf("YES");
//		}
//		else
//		{
//			printf("NO");
//		}
//		getchar();
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	char n = 0;
//	scanf("%c", &n);
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4-i; j++)
//		{
//			printf(" ");
//		 }
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%c ",n);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c",arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d",&year, &month, &day);
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("day=%02d\n", day);
//	return 0;
//}

#include <stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF )
	{
		n = 1 << n;
		printf("%d\n", n);
	}
	return 0;
}