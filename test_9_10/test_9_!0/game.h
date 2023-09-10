#pragma once

#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>  //ʹ��randʱ��Ҫ����
#include <time.h>	 //ʹ��timeʱ��Ҫ����

void InitBoard(char board[ROW][COL], int row, int col);  //��ʼ������������

void DisplayBoard(char board[ROW][COL], int row, int col);  //��ʾ����״̬����������

void PlayerMove(char board[ROW][COL], int row, int col);  //������庯��������

void ComputerMove(char board[ROW][COL], int row, int col);  //�������庯��������

char IsWin(char board[ROW][COL], int row, int col);  //�ж�ʤ������������

//  *  -   ��һ�ʤ
//  #  -   ���Ի�ʤ
//  Q  -   ƽ��
//  C  -   ����