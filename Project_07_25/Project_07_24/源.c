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
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ�����̣�
	Initboard(board, ROW, COL);
	Displayboard(board,ROW,COL);
	while (1)
	{
		PlayerMove(board,ROW,COL);
		//�ж���Ӯ
		ret=IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		Displayboard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		
		Displayboard(board, ROW, COL);
	}
		if (ret == '*')
		{
			printf("���Ӯ\n");
		}
		else if (ret == '#')
		{
			printf("����Ӯ\n");
		}
		else
		{
			printf("ƽ��\n");
		}
		Displayboard(board, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));//���������
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
				printf("������\n");
				game();
		case 0:
				printf("�˳���Ϸ\n");
				break;
		default:
				printf("ѡ�����\n");
				break;

		}
	} while (input);
	return 0;
}