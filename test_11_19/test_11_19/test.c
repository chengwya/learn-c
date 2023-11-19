#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>
#include <ctype.h>

enum State
{
	INVALID,
	VALID
};

enum State state = INVALID;

int my_atoi(const char* p)
{
	int flag = 1;
	if (p == NULL)
	{
		return 0;
	}
	if (*p == '\0')
	{
		return 0;
	}
	while (isspace(*p))
	{
		p++;
	}
	if (*p == '+')
	{
		flag = 1;
		p++;
	}
	else if (*p == '-')
	{
		flag = -1;
		p++;
	}
	
	long long n = 0;
	while (isdigit(*p))
	{
		n = n * 10 + flag * (*p - '0');
		if (n < INT_MIN || n>INT_MAX)
		{
			return 0;
		}
		p++;
	}
	if (*p == '\0')
	{
		state = VALID;
		return (int)n;
	}
	else
	{
		return (int)n;
	}
}

int main()
{
	const char* p = "   -14a";
	int ret = my_atoi(p);
	if(state == VALID)
		printf("合法：%d\n", ret);
	else
		printf("非法：%d\n", ret);
	return 0;
}