#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("a=%d,b=%d",&a, &b);
//	int c = 0;
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d,b=%d\n", a , b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	printf("%d\n",ch);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 40;
//	int c = 212;
//	printf("%d\n",(-8 + 22)*a - 10 + c/2);
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d\n",a/b, a%b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int weight = 0.0;
//	int high = 0.0;
//	double bmi = 0.0;
//	scanf("%d %d",&weight, &high);
//	bmi = weight / ((high / 100.0) * (high / 100.0));
//	printf("%.2lf\n", bmi);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	double circuference = a + b + c;
//	double p = circuference / 2;
//	double area =  sqrt(p*(p-a)*(p-b)*(p-c));
//	printf("circuference=%.2lf area=%.2lf\n", circuference, area);
//	return 0;
//}

#include <stdio.h>

int main()
{
	double r = 0;
	double pi = 3.1415926;
	double v = 0;
	scanf("%lf", &r);
	v = (4 / 3.0) * pi * (r * r * r);
	printf("%.3lf\n", v);
}