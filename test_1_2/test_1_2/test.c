#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int g_val = 200;
//
//int main()
//{
//	int g_val = 100;
//	printf("%d\n", g_val);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	register int g_val = 100;
//	g_val = 200;
//	printf("%d\n", g_val);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	register int g_val = 100;
//	printf("%d\n", &g_val);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("i=%d\n", i);
//		if (1)
//		{
//			int j = 1;
//			printf("before:%d\n", j);
//			j++;
//			printf("after:%d\n", j);
//		}
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i < 10; i++)
	{
		int j = 1;
		for (j = 1; j <=i; j++)
		{
			printf("%d*%d=%2d ", i ,j , i*j);
		}
		printf("\n");
	}
	return 0;
}