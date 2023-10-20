#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <assert.h>
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		str1++;
//		str2++;
//	}
//	if (*str1 < *str2)
//	{
//		return -1;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abdq";
//	printf("%d\n", my_strcmp(arr1, arr2));
//	return 0;
//}
//
//#include <stdio.h>
//
//char* my_strncpy(char* dest,const char* src, size_t num)
//{
//	char* ret = dest;
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		*dest++ = *src++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "hello ";
//	char arr2[] = "wor";
//	printf("%s\n", my_strncpy(arr1, arr2, 3));
//	return 0;
//}
//


//#include <stdio.h>
//#include <assert.h>
//
//char* my_strncat(char* dest, const char* src, size_t num)
//{
//        char* ret = dest;
//        assert(dest && src);
//        while (*dest)
//        {
//            dest++;
//        }
//        for (int i = 0; i < num; i++)
//        {
//            *dest++ = *src++;
//        }
//        return ret;
//}
//
//int main()
//{
//	char s1[20] = "hello ";
//	char s2[20] = "world";
//	printf("%s", my_strncat(s1, s2, 3));
//	return 0;
//}

#include <stdio.h>
#include <assert.h>

int my_strncmp(const char* str1,const char* str2, size_t num)
{
    assert(str1 && str2);
    int i = 0;
    int count = 0;
    for (i = 0; i < num; i++)
    {
        if (*str1 == *str2)
        {
            str1++;
            str2++;
            count++;
            if (count == num)
            {
                return 0;
            }
        }
        else  if (*str1 < *str2)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
   
}

int main()
{
	char s1[] = "abcdef";
	char s2[] = "abcdqwer";
	printf("%d", my_strncmp(s1, s2, 5));
	return 0;
}