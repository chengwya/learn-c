#define _CRT_SECURE_NO_WARNINGS 1

//1.��Ŀ���ƣ��������
//
//��Ŀ���ݣ���Sn = a + aa + aaa + aaaa + aaaaa��ǰ����֮�ͣ�����a��һ�����֡�
//
//���磺2 + 22 + 222 + 2222 + 22222

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + 2;
//		sum += ret;
//	}
//	printf("sum��ֵΪ��%d", sum);
//	return 0;
//}

//2.��Ŀ���ƣ���ӡ��������
//
//��Ŀ���ݣ�дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά���顣

#include <stdio.h>

void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\n");
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	return 0;
}