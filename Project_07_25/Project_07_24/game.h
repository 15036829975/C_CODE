#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
//��ʼ������
void Initboard(char board[ROW][COL],int row,int col);
//��ӡ����
void Displayboard(char board[ROW][COL], int row, int col);
//�������
void PlayerMove(char board[ROW][COL], int row,int col);
//�ҿհ׵������
void ComputerMove(char board[ROW][COL], int row, int col);
//�ж���Ӯ
char IsWin(char board[ROW][COL], int row, int col);