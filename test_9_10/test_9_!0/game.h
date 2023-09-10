#pragma once

#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>  //使用rand时需要调用
#include <time.h>	 //使用time时需要调用

void InitBoard(char board[ROW][COL], int row, int col);  //初始化函数的声明

void DisplayBoard(char board[ROW][COL], int row, int col);  //显示棋盘状态函数的声明

void PlayerMove(char board[ROW][COL], int row, int col);  //玩家下棋函数的声明

void ComputerMove(char board[ROW][COL], int row, int col);  //电脑下棋函数的声明

char IsWin(char board[ROW][COL], int row, int col);  //判断胜负函数的声明

//  *  -   玩家获胜
//  #  -   电脑获胜
//  Q  -   平局
//  C  -   继续