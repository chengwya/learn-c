#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int arr[30][30] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i > 1 && j > 0)
//			{
//				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++ )
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int arr[3][3] = { 0 };
	char flag = 'O';
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf(" %c", &arr[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
		{
			flag = arr[i][1];
			break;
		}
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
		{
			flag = arr[1][i];
			break;
		}
		if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
		{
			flag = arr[1][1];
			break;
		}
		if (arr[0][2] == arr[1][1] && arr[1][1] == arr[0][0] )
		{
			flag = arr[1][1];
			break;
		}

	}
	if (flag == 'K')
		printf("KK wins!\n");
	else if (flag == 'B')
		printf("BOBO wins!\n");
	else
		printf("No winn\n");
	return 0;
}