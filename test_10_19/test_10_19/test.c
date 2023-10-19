#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	const char* s1 = "abcdef";
//	const char* s2 = "abcdqsea";
//	if (strlen(s1) - strlen(s2) < 0)
//	{
//		printf("s1 < s2\n");
//	}
//	else
//	{
//		printf("s1 > s2\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//
//unsigned int my_strlen(const char* str)
//{
//	assert(*str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[20] = "hello world!";
//	printf("%d\n", my_strlen(arr)); //12
//	return 0;
//}

//#include <stdio.h>
//
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char s1[10] = "hello";
//	char s2[10] = "word";
//	my_strcpy(s1, s2);
//	printf("%s\n", my_strcpy(s1, s2));
//	return 0;
//}

#include <stdio.h>
#include <assert.h>

char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	printf("%s\n", my_strcat(arr1, arr2));
	return 0;
}