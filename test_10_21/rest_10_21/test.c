#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <assert.h>
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//	if (*str2 == '\0')
//	{
//		return str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdd";
//	char* ret = my_strstr(arr1, arr2);
//	printf("%s", ret);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "Hello#world.!!!";
//	char* ret = NULL;
//	/*printf("%s ", ret);
//	 ret = strtok(NULL, "#.");
//	printf("%s ", ret);
//	 ret = strtok(NULL, "#.");
//	printf("%s ", ret);*/
//	
//	for (ret = strtok(arr, "#."); ret != NULL; ret = strtok(NULL, "#."))
//	{
//		printf("%s ", ret);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//#include <errno.h>
//
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fclose(pf);
//	return 0;
//}

//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//	char arr[10] = { 0 };
//	scanf("%s",arr);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		printf("%c ", arr[i]);
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//void* my_memcpy(void* dest, const* src, size_t num)
//{
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	 my_memcpy(arr + 2, arr , 20);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//void my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	my_memmove(arr + 2, arr , 20);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



#include <stdio.h>
#include <assert.h>

int my_memcmp(const void* str1, const void* str2, size_t num)
{
	assert(str1 && str2);
	while (num--)
	{
		if (*(char*)str1 == *(char*)str2)
		{
			str1 = (char*)str1 + 1;
			str2 = (char*)str2 + 1;
		}
		else if (*(char*)str1 < *(char*)str2)
		{
			return -1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdqq";
	int ret = my_memcmp(arr1, arr2, 4);
	printf("%d", ret);
	return 0;
}

//int my_memcmp(const void* s1, const void* s2, size_t num)
//{
//	assert(s1 && s2);
//	while (num--)
//	{
//		if (*(char*)s1 > *(char*)s2)
//			return 1;
//		else if (*(char*)s1 < *(char*)s2)
//			return -1;
//		else
//		{
//			s1 = (char*)s1 + 1;
//			s2 = (char*)s2 + 1;
//		}
//	}
//	return 0;
//}
