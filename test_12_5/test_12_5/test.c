#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int s1 = 0;
//	int s2 = 0;
//	int s3 = 0;
//	int max = 0;
//	while (~scanf("%d %d %d", &s1, &s2, &s3))
//	{
//		max = s1 > s2 ? s1 : s2;
//		max = max > s3 ? max : s3;
//		printf("%d\n", max);
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	char arr[] = "AaEeIiOoUu";
//	char ch = 0;
//	int i = 0;
//	while (scanf(" %c", &ch) != EOF)
//	{
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == arr[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//		{
//			printf("Consonant\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isalpha(ch))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//		getchar();
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char ch = 0;
//	while(scanf(" %c", &ch) != EOF)
//	{
//		if (islower(ch))
//		{
//			printf("%c\n", toupper(ch));
//		}
//		else
//		{
//			printf("%c\n", tolower(ch));
//		}
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int t = 0;
	while (~scanf("%d", &t))
	{
		if (t > 0)
			printf("%d\n", 1);
		else if(t<0)
			printf("%d\n", 0);
		else
			printf("%.1lf\n", 0.5f);
	}
	return 0;
}