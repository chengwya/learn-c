#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if (a + b > c || a + c > b || c + b > a)
//		{
//			if (a == b && b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a==b && a!= c) || (a==c && a!=b) ||(b==c  &&  b!= a))
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//		{
//				printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int h = 0;
//	int w = 0;
//	double bmi = 0.0;
//	while (scanf("%d %d", &w, &h) != EOF)
//	{
//		bmi = w / ((h / 100.0) * (h / 100.0));
//		if (bmi < 18.9)
//			printf("Underweight\n");
//		else if (bmi >= 18.5 && bmi <= 23.9)
//			printf("Normal\n");
//		else if (bmi > 23.9 && bmi <= 27.9)
//			printf("Overweight\n");
//		else
//			printf("Obese\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	float a = 0.0;
//	float b = 0.0;
//	float c = 0.0;
//	double x1 = 0;
//	double x2 = 0;
//	while (scanf("%f %f %f", &a, &b, &c) != EOF)
//	{
//		if (a == 0)
//		{
//			printf("Not quadratic equation\n");
//		}
//		else
//		{
//			float disc = b * b - 4 * a * c;
//			if (disc == 0)
//			{
//				printf("x1=x2=%.2f\n", (-b)/ (2 * a));
//			}
//			else if (disc > 0.0)
//			{
//				printf("x1=%.2f;x2=%.2f\n", (-b - sqrt(disc)) / (2 * a), (-b + sqrt(disc)) / (2 * a));
//			}
//			else
//			{
//				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n",(-b)/(2 * a),sqrt(-disc)/(2 * a),(-b)/ (2 * a),sqrt(-disc)/(2 * a));
//			}
//		}
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int year = 0;
	int month = 0;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31};
	while (scanf("%d %d", &year, &month) != EOF)
	{
		int day = days[month - 1];
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			if (month == 2)
			{
				day += 1;
			}
		}
		printf("%d\n", day);
	}
	return 0;
}