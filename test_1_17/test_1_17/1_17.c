#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 9;
	switch (i)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("´ò¹¤!");
		break;
	case 6:
	case 7:
		printf("ÐÝÏ¢!");
		break;
	default:
		printf("error");
		break;
	}
	return 0;
}

//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	while (i < 6) {
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

