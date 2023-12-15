#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int flag1 = 0;
//	int flag2 = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[50] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i > 0)
//		{
//			if (arr[i] < arr[i - 1])
//				flag1 = 1;
//			else if (arr[i] > arr[i - 1])
//				flag2 = 1;
//		}
//	}
//
//	if (flag1 + flag2 == 2)
//	{
//		printf("unsorted\n");
//	}
//	else
//	{
//		printf("sorted\n");
//	}
//		return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int key = 0;
//	int arr[50] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &key);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != key)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int arr[5000] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				int k = 0;
//				for (k = j; k < n - 1; k++)
//				{
//					arr[k] = arr[k + 1];
//				}
//				n--;
//				j--;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 3; i++)
//	{
//		;
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	int i = 0;
	int j = 0;
	int arr1[100] = { 0 };
	int arr2[100] = { 0 };
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}

	i = 0;
	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
		{
			printf("%d ", arr1[i]);
			i++;
		}
		else
		{
			printf("%d ", arr2[j]);
			j++;
		}
	}
	if (i == n)
	{
		for (; j < m; j++)
			printf("%d ", arr2[j]);
	}
	else
	{
		for (; i < n; i++)
			printf("%d ", arr1[i]);
	}
	return 0;
}