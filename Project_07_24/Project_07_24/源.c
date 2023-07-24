#define _CRT_SECURE_NO_WARNINGS

#include"game.h"
void menu()
{
	printf("*******************************\n");
	printf("******** 1.play 0.exit ********\n");
	printf("*******************************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	//初始化棋盘；
	Initboard(board, ROW, COL);
	Displayboard(board,ROW,COL);
	while (1)
	{
		PlayerMove(board,ROW,COL);
		Displayboard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
	}
}
int main()
{
	srand((unsigned int)time(NULL));//设置随机数
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
				printf("三子棋\n");
				game();
		case 0:
				printf("退出游戏\n");
				break;
		default:
				printf("选择错误\n");
				break;

		}
	} while (input);
	return 0;
}