#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	int arr[101] = {0};
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int key = 0;
//	scanf("%d", &key);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == key)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

#include <stdio.h>

struct Node
{
	int data;
	struct Node* next; 
};

int main()
{
	struct Node* list = NULL;
	struct Node* tail = NULL;
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	int m = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &j);
		struct Node* pn = (struct Node*)malloc(sizeof(struct Node));
		pn->data = j;
		pn->next = NULL;

		if (list == NULL)
		{
			list = pn;
			tail = pn;
		}
		else
		{
			tail->next = pn;
			tail = pn;
		}
	}
		scanf("%d", &m);

		struct Node* prev = NULL;
		struct Node* cur = list;

		while (cur)
		{
			if (cur->data == m)
			{
				struct Node* pd = cur;
				if (cur == list)
				{
					list = list->next;
					cur = list;
				}
				else
				{
					prev->next = cur->next;
					cur = prev->next;
				}
				free(pd);
				n--;
			}
			else
			{
				prev = cur;
				cur = cur->next;
			}
		}
		printf("%d\n", n);
		cur = list;
		while (cur)
		{
			printf("%d ", cur->data);
			cur = cur->next;
		}

		cur = list;
		struct Node* del = NULL;
		while (cur)
		{
			del = cur;
			cur = cur->next;
			free(del);
		}
		list = NULL;
	return 0;
}