#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int score = 0;
//	int i = 0;
//	int min = 100;
//	int max = 0;
//	float sum = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &score);
//		sum += score;
//		if (score > max)
//			max = score;
//		if (score < min)
//			min = score;
//	}
//	sum = sum - min - max;
//	printf("%.2f\n", sum/5.0);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char name[20] = { 0 };
//	char password[20] = { 0 };
//	while (scanf("%s  %s", &name, &password) != EOF)
//	{
//		if (strcmp(name, "admin") == 0 && strcmp(password, "admin") == 0)
//		{
//			printf("Login Success!\n");
//		}
//		else
//		{
//			printf("Login Fail!\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	printf("%d %d", N - N/2, N/2);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		n = i;
//		while (n)
//		{
//			if (n % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			n = n / 10;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

#include <stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	int a[100][100] = { 0 };
	int b[100][100] = { 0 };
	float count = 0.0;
	int i = 0;
	int j = 0;

	scanf("%d %d", &m, &n);

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] == b[i][j])
			{
				count++;
			}
		}
	}
	printf("%.2f\n", 100.0 * count / (m*n));

	return 0;
}