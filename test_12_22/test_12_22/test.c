#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int max3(int a, int b, int c)
//{
//	int max = 0;
//	max = a > b ? a : b;
//	max = c > max ? c : max;
//	return max;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	double m = 0;
//	m = (double)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c));
//	printf("%.2f\n", m);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 4; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[8000] = { 0 };
//	scanf("%s", str);
//	char* p = str;
//	long long c = 0;
//	long long ch = 0;
//	long long chn = 0;
//	while (*p)
//	{
//		if (*p == 'C')
//			c++;
//		else if (*p == 'H')
//			ch += c;
//		else if (*p == 'N')
//			chn += ch;
//		p++;
//	}
//	printf("%lld\n", chn);
//	return 0;
//}

#include <stdio.h>

int main()
{
	printf("printf(\"Hello world!\\n\");\n");
	printf("cout << \"Hello world!\" << endl;");
	return 0;
}