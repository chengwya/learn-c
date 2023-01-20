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
//	printf("%d的阶乘为%d\n", n, sum);
//	return 0;
//}

//#include <stdio.h>
////第二题
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
//	printf("10!为%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main() //二分查找法
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
//			printf("找到了，它在数组下标为%d上",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("抱歉，没有找到您要的数字");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <windows.h> //下面Sleep函数和system使用时需要引用该头文件
//第四题 - while循环
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
//		Sleep(1000); //休眠1秒 Sleep函数单位为毫秒 
//		system("cls"); //清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
////第五题
//int main()
//{
//	char password[20] = "1234567890"; //假设密码为1234567890
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入你的密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "1234567890") == 0)  //字符串比较不能用 == ，应该使用strcmp
//		{
//			printf("输入正确！\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误，请重新输入！\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("输入三次密码均错误，将退出程序！");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <windows.h> //下面Sleep函数和system使用时需要引用该头文件
////第四题 - for循环
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
//		Sleep(1000); //休眠1秒 Sleep函数单位为毫秒 
//		system("cls"); //清空屏幕
//	}
//	printf("%s\n", arr1);
//	return 0;
//}


////猜数字游戏
////游戏规则：
////1.选择1就开始游戏，选择0就退出游戏
////2.如果数字猜大了，就会提示猜大了
////3.如果数字猜小了，就会提示猜小了
//#include <stdio.h>
//#include <stdlib.h>  //rand，srand函数使用时需要引用该头文件
//#include <time.h> //使用time函数需引用该头文件
//void menu();
//void game();
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu(); //菜单函数
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game(); //游戏函数
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择:>");
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
//	srand((unsigned int)time(NULL)); //设置rand的初始范围
//	//srand是用来设置rand函数初始范围0-RAND_MAX
//	//time函数是用来引用时间戳。时间戳：引用函数的时间减去计算机初始时间
//	//time函数类型为unsigned int,暂时不需要参数所以给NULL
//	//rand函数提供了一个随机数，rand的初始范围为0-32767
//	int Num = rand()%100+1; //%100的范围为0-99, +1后范围就为1-100 
//	while (1) //设置个死循环
//	{
//		printf("请输入所猜的数字:>");
//		scanf("%d", &guess);
//		if (Num < guess)
//		{
//			printf("猜大了！\n");
//		}
//		else if (Num > guess)
//		{
//			printf("猜小了！\n");
//		}
//		else
//		{
//			printf("恭喜猜对！\n");
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
//循环写法
//#include <stdio.h>
//#include <stdlib.h> //strcmp
//#include <string.h> //system
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");  //system函数 - 执行系统命令滴
//	while (1)
//	{
//		printf("请输入我真帅，否则你的电脑将在一分钟之内关机\n请输入：");
//		scanf("%s", input); 
//		if (strcmp(input, "我真帅") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

//goto语句写法
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请输入我真帅，否则你的电脑将在一分钟之内关机\n请输入：");
	scanf("%s", input);
	if (strcmp(input, "我真帅") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("输入错误，请重新输入\n");
		goto again;
	}
	return 0;
}
