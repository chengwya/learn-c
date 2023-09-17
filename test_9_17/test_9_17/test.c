#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>

//ʵ�ֺ���init() ��ʼ������ȫΪ0
//ʵ��print() ��ӡ�����ÿһ��Ԫ��
//ʵ��reverse() �����������Ԫ�ص�����

//void init(int arr[], int sz)
//{
//	for (int i = 0;i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	reverse(arr, sz);
//	print(arr, sz);
//
//	init(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}

#include <stdio.h>

void swap(int arr1[],int arr2[], int sz)
{
	int tmp = 0;
	for (int i = 0;i < sz;i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}

void print(int arr1[], int arr2[], int sz)
{
	for (int i = 0;i < sz;i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i = 0;i < sz;i++)
	{
		printf("%d ", arr2[i]);
	}
}

int main()
{
	int arr1[] = { 3,13,23,33,43,53,63,73,83,93 };
	int arr2[] = { 2,12,22,32,42,52,62,72,82,92 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	swap(arr1, arr2, sz);
	print(arr1, arr2, sz);
	return 0;
}