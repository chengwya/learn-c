#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d�Ľ׳�Ϊ%d\n", n, sum);
//	return 0;
//}

//#include <stdio.h>
////�ڶ���
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for ( n = 1; n <= 10; n++)
//	{
//		int ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("10!Ϊ%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main() //���ֲ��ҷ�
//{
//	int left = 0;
//	int mid = 0;
//	int n = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	scanf("%d", &n);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ����������±�Ϊ%d��",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("��Ǹ��û���ҵ���Ҫ������");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <windows.h> //����Sleep������systemʹ��ʱ��Ҫ���ø�ͷ�ļ�
//������ - whileѭ��
//int main()
//{
//	char arr1[] = "############";
//	char arr2[] = "Hello World!";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("%s\n", arr1);
//		Sleep(1000); //����1�� Sleep������λΪ���� 
//		system("cls"); //�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
////������
//int main()
//{
//	char password[20] = "1234567890"; //��������Ϊ1234567890
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("�������������:>");
//		scanf("%s", password);
//		if (strcmp(password, "1234567890") == 0)  //�ַ����Ƚϲ����� == ��Ӧ��ʹ��strcmp
//		{
//			printf("������ȷ��\n");
//			break;
//		}
//		else
//		{
//			printf("����������������룡\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("����������������󣬽��˳�����");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <windows.h> //����Sleep������systemʹ��ʱ��Ҫ���ø�ͷ�ļ�
////������ - forѭ��
//int main()
//{
//	char arr1[] = "############";
//	char arr2[] = "Hello World!";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	for(left = 0, right = strlen(arr2) - 1;  left<=right; left++,right--)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("%s\n", arr1);
//		Sleep(1000); //����1�� Sleep������λΪ���� 
//		system("cls"); //�����Ļ
//	}
//	printf("%s\n", arr1);
//	return 0;
//}


////��������Ϸ
////��Ϸ����
////1.ѡ��1�Ϳ�ʼ��Ϸ��ѡ��0���˳���Ϸ
////2.������ֲ´��ˣ��ͻ���ʾ�´���
////3.������ֲ�С�ˣ��ͻ���ʾ��С��
//#include <stdio.h>
//#include <stdlib.h>  //rand��srand����ʹ��ʱ��Ҫ���ø�ͷ�ļ�
//#include <time.h> //ʹ��time���������ø�ͷ�ļ�
//void menu();
//void game();
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu(); //�˵�����
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game(); //��Ϸ����
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��:>");
//			printf("\n");
//			break;
//		}
//	} while (input);
//}
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("********** 1.play ***********\n");
//	printf("********** 0.exit ***********\n");
//	printf("*****************************\n");
//}
//
//void game()
//{
//	int guess = 0;
//	srand((unsigned int)time(NULL)); //����rand�ĳ�ʼ��Χ
//	//srand����������rand������ʼ��Χ0-RAND_MAX
//	//time��������������ʱ�����ʱ��������ú�����ʱ���ȥ�������ʼʱ��
//	//time��������Ϊunsigned int,��ʱ����Ҫ�������Ը�NULL
//	//rand�����ṩ��һ���������rand�ĳ�ʼ��ΧΪ0-32767
//	int Num = rand()%100+1; //%100�ķ�ΧΪ0-99, +1��Χ��Ϊ1-100 
//	while (1) //���ø���ѭ��
//	{
//		printf("���������µ�����:>");
//		scanf("%d", &guess);
//		if (Num < guess)
//		{
//			printf("�´��ˣ�\n");
//		}
//		else if (Num > guess)
//		{
//			printf("��С�ˣ�\n");
//		}
//		else
//		{
//			printf("��ϲ�¶ԣ�\n");
//			break;
//		}
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 2; i++)
//	{
//		if (i == 2)
//		{
//			goto end;
//		}
//		printf("Hello ");
//	}
//end: 
//	printf("World!\n");
//	return 0;
//
// }
//ѭ��д��
//#include <stdio.h>
//#include <stdlib.h> //strcmp
//#include <string.h> //system
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");  //system���� - ִ��ϵͳ�����
//	while (1)
//	{
//		printf("����������˧��������ĵ��Խ���һ����֮�ڹػ�\n�����룺");
//		scanf("%s", input); 
//		if (strcmp(input, "����˧") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

//goto���д��
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("����������˧��������ĵ��Խ���һ����֮�ڹػ�\n�����룺");
	scanf("%s", input);
	if (strcmp(input, "����˧") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("�����������������\n");
		goto again;
	}
	return 0;
}
