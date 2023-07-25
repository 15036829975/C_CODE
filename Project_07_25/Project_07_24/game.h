#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
//初始化棋盘
void Initboard(char board[ROW][COL],int row,int col);
//打印棋盘
void Displayboard(char board[ROW][COL], int row, int col);
//玩家下棋
void PlayerMove(char board[ROW][COL], int row,int col);
//找空白的随机下
void ComputerMove(char board[ROW][COL], int row, int col);
//判断输赢
char IsWin(char board[ROW][COL], int row, int col);