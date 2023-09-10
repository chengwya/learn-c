#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()  //打印菜单函数
{
	printf("********************************\n");
	printf("*********   1.play    **********\n");
	printf("*********   0.exit    **********\n");
	printf("********************************\n");
}


void game()
{
	char board[ROW][COL];
	char ret = 0;
	srand((unsigned int)time(NULL));
	InitBoard(board, ROW, COL);  //棋盘的初始化
	DisplayBoard(board, ROW, COL); //打印棋盘
	while (1)
	{
		PlayerMove(board, ROW, COL);  //玩家下棋
		DisplayBoard(board, ROW, COL); //显示当前棋盘状态
		ret = IsWin(board, ROW, COL);  //判断胜负
		if (ret != 'C') //如果是* # Q ，那么游戏就结束了。
		{
			break;
		}

		ComputerMove(board, ROW, COL);  //电脑下棋
		DisplayBoard(board, ROW, COL);	
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家获胜\n");
	}
	else if (ret == '#')
	{
		printf("电脑获胜\n");
	}
	else
	{
		printf("平局\n");
	}

}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0 :
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}