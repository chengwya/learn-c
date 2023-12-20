#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	int arr[20] = { 0 };
//	while (n)
//	{
//		arr[i++] = n % 6;
//		n /= 6;
//	}
//
//	for (i--; i >= 0; i-- )
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int k = 0;
//	int hour = 0;
//	int minute = 0;
//	scanf("%d:%d %d", &hour, &minute, &k);
//	hour = k / 60 + hour;
//	minute = k % 60;
//	printf("%02d:%02d", hour, minute);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int time = 2;
//	scanf("%d", &n);
//	if (n / 12 == 1)
//	{
//		printf("%d\n", time+4);
//	}
//	else
//	{
//		printf("%d\n", time);
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	scanf("%d%d", &n, &m);
	int max = n > m ? n : m;
	int min = n > m ? m : n;
	int GCD = 0; //最大公因数
	int Lcm = 0; //最小公倍数
	while (1)
	{
		if (n % min == 0 && m % min == 0)
		{
			GCD = min;
			break;
		}
		else
		{
			min--;
		}
	}

	while (1)
	{
		if (max % m == 0 && max % n == 0)
		{
			Lcm = max;
			break;
		}
		else
		{
			max++;
		}
	}
	printf("%d\n", GCD+ Lcm);
	return 0;
}