#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	double n = 0;
//	scanf("%lf",&n);
//	printf("%d\n", (int)n%10);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int score[3] = { 0 };
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//	printf("score1=%d,score2=%d,score3=%d\n",score[0],score[1],score[2]);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 100000; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 10; j <= 10000; j*=10)
//		{
//			sum += (i / j) * (i % j);
//		}
//		if(sum==i)
//			printf("%d ",sum);
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int age = 0;
	scanf("%d", &age);
	int sum = age * 3.156e7;
	printf("%d\n", sum);
	return 0;
}