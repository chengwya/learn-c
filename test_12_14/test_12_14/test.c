#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int sum = 0;
//	int num = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &num);
//			if (num > 0)
//				sum += num;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {0};
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 9; i >= 0; i--)
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
//	int num = 0;
//	int positive = 0;
//	int negative = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &num);
//		if (num > 0)
//			positive++;
//		else
//			negative++;
//	}
//	printf("positive:%d\n", positive);
//	printf("negative:%d\n", negative);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int num = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num);
//		sum += num;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

#include <stdio.h>

int main()
{
	int i = 0;
	int num = 0;
	int sum = 0;
	int min = 100;
	int max = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num);
		if (num > max)
			max = num;
		if (num < min)
			min = num;
	}
	printf("%d\n", max-min);
;	return 0;
}