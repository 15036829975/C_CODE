#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row;i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//第一版
//void Displayboard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//		if (i < row - 1)
//			printf("---|---|---\n");
//	}
//}
void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印数据
		/*printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);*/
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		/*if (i < row - 1)
			printf("---|---|---\n");*/
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			
			}
			printf("\n");
		}
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋:>\n");
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		while (1)
		{
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (board[x - 1][y - 1] == ' ')
				{
					board[x - 1][y - 1] = '*';
					break;
				}
				else
				{
					printf("被占\n");
					break;
				}
			}
			else
			{
				printf("坐标非法\n");
			}
		}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
