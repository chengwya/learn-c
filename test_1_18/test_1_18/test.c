#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int x = 3;
//	for (x = 0; x <= 5; x++)
//	{
//		if (x == 3)
//		{
//			break;
//		}
//		printf("%d ", x);
//	}
//	return 0;
//}

//int main()
//{
//	int x = 3;
//	for (x = 0; x <= 5; x++)
//	{
//		if (x == 3)
//		{
//			continue;
//		}
//		printf("%d ", x);
//	}
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	while (x < 6)
//	{
//		if (x == 3)
//		{
//			continue;
//		}
//		printf("%d ", x);
//		x++;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//		printf("%c", ch);
//	return 0;
//}

#include <stdio.h>

int main()
{
	char ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
			continue;
		putchar(ch);
	}
	return 0;
}