#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()  //��ӡ�˵�����
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
	InitBoard(board, ROW, COL);  //���̵ĳ�ʼ��
	DisplayBoard(board, ROW, COL); //��ӡ����
	while (1)
	{
		PlayerMove(board, ROW, COL);  //�������
		DisplayBoard(board, ROW, COL); //��ʾ��ǰ����״̬
		ret = IsWin(board, ROW, COL);  //�ж�ʤ��
		if (ret != 'C') //�����* # Q ����ô��Ϸ�ͽ����ˡ�
		{
			break;
		}

		ComputerMove(board, ROW, COL);  //��������
		DisplayBoard(board, ROW, COL);	
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("��һ�ʤ\n");
	}
	else if (ret == '#')
	{
		printf("���Ի�ʤ\n");
	}
	else
	{
		printf("ƽ��\n");
	}

}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0 :
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}