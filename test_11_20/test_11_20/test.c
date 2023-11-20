#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0;i < 10; i++)
	{
		arr[i] = i;
		#ifdef __DEBUG__
		printf("%d ", arr[i]);
		#endif //__DEBUG__
	}
	return 0;
}