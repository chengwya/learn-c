#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[3] = { 1,2,3 };
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d ",arr[i]); //当i=3时，越界访问了。
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//void bubble_sort(int arr[], int s)
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0;x < s-1;x++)
//	{
//		for (y = 0;y < s-1-x; y++)
//		{
//			if (arr[y] > arr[y + 1])
//			{
//				int tmp = 0;
//				tmp = arr[y];
//				arr[y] = arr[y + 1];
//				arr[y + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[5] = { 56,48,91,45,62 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int x = 0;
//	bubble_sort(arr, sz);
//	for (x = 0;x < sz;x++)
//	{
//		printf("%d ",arr[x]);
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3 };
	printf("%p\n",arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);
	return 0;
}