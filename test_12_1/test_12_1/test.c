#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int input = 0;
//	int hour = 0;
//	int minute = 0;
//	int seconds = 0;
//	scanf("%d", &input);
//	hour = input / 60 / 60;
//	minute = input / 60 % 60;
//	seconds = input % 60;
//	printf("%d %d %d ",hour, minute, seconds );
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	double score = 0.0;
//	double sum = 0.0;
//	double avg = 0.0;
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%lf", &score);
//		sum += score;
//	}
//	avg = sum / 3.0;
//	printf("%.2lf %.2lf\n", sum , avg);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("I lost my cellphone!");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("Name   Age   Gender\n");
//	printf("---------------------\n");
//	printf("Jack   18     man\n");
//	return 0;
//}

#include <stdio.h>

int main()
{
	int n = 0;
	int h = 0;
	int m = 0;
	while (scanf("%d %d %d", &n, &h, &m) != EOF )
	{
		if (m % h)
		{
			printf("%d\n",n - m/h -1);
		}
		else
		{
			printf("%d\n", n - m / h);
		}
	}
	return 0;
}