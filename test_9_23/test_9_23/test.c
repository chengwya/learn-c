#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] =  0 ;
//		printf("Hello\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("Hello\n");
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int sum = 0;
	int ret = 1;
	scanf("%d",&n);
	for (i = 1;i <= n;i++)
	{
		for (j = 1;j <= i;j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("sum=%d\n",sum);
	return 0;
}