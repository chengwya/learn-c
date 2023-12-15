#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		double sum = 0.0;
//		double score = 0.0;
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%lf", &score);
//			sum += score;
//			printf("%.1lf ", score);
//		}
//		printf("%.1lf\n", sum);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	int arr[10][10] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	scanf("%d%d", &n, &m);
//	printf("%d\n", arr[n - 1][m - 1]);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int num = 0;
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n*m; i++)
//	{
//		scanf("%d", &num);
//		printf("%d ", num);
//		if (i % m == 0)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	int j = 0;
//	int height = 0;
//	int max = 0;
//	int x = 0;
//	int y = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &height);
//			if (height > max)
//			{
//				x = i;
//				y = j;
//				max = height;
//			}
//		}
//	}
//	printf("%d %d\n",x+1, y+1 );
//	return 0;
//}

#include <stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	scanf("%d%d", &n, &m);
	int i = 0;
	int j = 0;
	int arr1[10][10] = { 0 };
	int arr2[10][10] = { 0 };
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (arr1[i][j] != arr2[i][j])
			{
				printf("No\n");
				return 0;
			}
		}
	}
	printf("Yes\n");
	return 0;
}