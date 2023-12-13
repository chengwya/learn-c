#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[50] = { 0 };
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &m);
//	for (i = n; i > 0; i--)
//	{
//		if (arr[i-1] > m)
//		{
//			arr[i] = arr[i - 1];
//		}
//		else
//		{
//			arr[i] = m;
//			break;
//		}
//	}
//	if (i == 0)
//	{
//		arr[0] = m;
//	}
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include  <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int count = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int arr[100];
//		int i = 0;
//		for (i = 0; i <= n; i++)
//		{
//			arr[i] = i;
//		}
//		for (i = 2; i <= n; i++)
//		{
//			int j = 0;
//			for (j = i + 1; j <= n; j++)
//			{
//				if (arr[j] % i == 0)
//				{
//					arr[j] = 0;
//				}
//			}
//		}
//		for (i = 2; i <= n; i++)
//		{
//			if (arr[i] != 0)
//			{
//				printf("%d ", arr[i]);
//			}
//			else
//			{
//				count++;
//			}
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	float score = 0;
//	float sum = 0;
//	float max = 0.0;
//	float min = 100.0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%f", &score);
//		sum += score;
//		if (score > max)
//			max = score;
//		if (score < min)
//			min = score;
//	}
//	printf("%.2f %.2f %.2f", max, min ,sum/n);
//	return 0;
//}

#include <stdio.h>
#include <string.h>

int main()
{
	char password1[20] = { 0 };
	char password2[20] = { 0 };
	scanf("%s %s", password1, password2);
	if (strcmp(password1, password2) == 0)
	{
		printf("same\n");
	}
	else
	{
		printf("different\n");
	}
	return 0;
}