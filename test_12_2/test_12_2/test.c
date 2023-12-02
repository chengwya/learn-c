#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~(scanf("%d", &n)))
//	{
//		if (n >= 140)
//		{
//			printf("Genius\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int score = 0;
//	while (~scanf("%d", &score))
//	{
//		if (score >= 90 && score <= 100)
//		{
//			printf("Perfect\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int score = 0;
//	while (scanf("%d", &score) != EOF)
//	{
//		if (score >= 60)
//		{
//			printf("Pass\n");
//		}
//		else
//		{
//			printf("Fail\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int score = 0 ;
//	int i = 0;
//	int sum = 0;
//	double avg = 0.0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//	}
//	avg = sum / 5.0;
//	printf("%.1lf\n", avg);
//	return 0;
//}

#include <stdio.h>

int main()
{
	int flag = 0;
	int i = 0;
	char arr[100] = { 0 };
	gets(arr);
	while (arr[i] != '0')
	{
		if (arr[i] == 'A')
		{
			flag++;
		}
		if (arr[i] == 'B')
		{
			flag--;
		}
		i++;
	}

	if (flag > 0)
	{
		printf("A\n");
	}
	else if (flag < 0)
	{
		printf("B\n");
	}
	else
	{
		printf("E\n");
	}
	return 0;
}