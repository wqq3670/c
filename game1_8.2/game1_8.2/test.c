#define _CRT_SECURE_NO_WARNINGS 1


#include"game.h"

void menu()
{
	printf("*************************\n");
	printf("*****   1. play     *****\n");
	printf("*****   0. exit     *****\n");
	printf("*************************\n");
}
void game()
{
	char Board[ROW][COL] = { 0 };   //定义棋盘
	char ret = 0;
	InitBoard(Board, ROW, COL);     //初始化棋盘
	Display_Board(Board, ROW, COL);  //打印棋盘

	while (1)
	{
		PlayerMove(Board, ROW, COL);//玩家走
		Display_Board(Board, ROW, COL);  //打印棋盘
		//判断输赢
		ret = ChekWin(Board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(Board, ROW, COL);//电脑走
		Display_Board(Board, ROW, COL);  //打印棋盘
		//判断输赢
		ret = ChekWin(Board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
		     printf("退出游戏\n");
			 break;
		default:
			 printf("输入错误\n");
			 break;
		}
	} while (input);
}
int main()
{
	test();
	system("pause");
	return 0;
}
