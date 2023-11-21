
#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	char* p = "Hello ""World";
//	printf("Hello" " World\n");
//	printf("%s\n", p);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	#define PRINT(FORMAT, VALUE) printf("the value is "FORMAT"\n", VALUE);
//	PRINT("%d", 10);
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 5;
//	#define PRINT(FORMAT, VALUE)  printf("the value of " #VALUE " is "FORMAT "\n", VALUE);
//	PRINT("%d", i + 1);
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//	#define ADD_SUM(num, value) sum##num += value;
//	ADD_SUM(1, 3);//给sum1增加了3。
//	return 0;
//}


//#include <stdio.h>
//
//void Find(int arr[], int sz, int* x1, int* y1)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	int Pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//		    Pos = i;
//			break;
//		}
//	}
//
//	int num1 = 0;
//	int num2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> Pos) & 1) == 1)
//		{
//			num1 ^= arr[i];
//		}
//		else
//		{
//			num2 ^= arr[i];
//		}
//	}
//	*x1 = num1;
//	*y1 = num2;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
//	int x = 0;
//	int y = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Find(arr, sz, &x, &y);
//
//	printf("%d %d",x, y);
//	return 0;
//}

