#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void game()
{
	char ret = 0;
	//创建一个棋盘
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//玩游戏

	while (1)
	{
		//玩家走
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//判断输赢
		ret=Is_Win(board, ROW, COL);
		if ('C' != ret)
		{
			break;
		}

		//电脑走
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		
		//判断输赢
		ret = Is_Win(board, ROW, COL);
		if ('C' != ret)
		{
			break;
		}
	}
	if ('*' == ret)
	{
		printf("玩家赢\n");
	}
	else if ('#' == ret)
	{
		printf("电脑赢\n");
	}
	else if ('P' == ret)
	{
		printf("平局\n");
	}


}



void menu()
{
	printf("**************************\n");
	printf("*****     1. play    *****\n");
	printf("*****     0. exit    *****\n");
	printf("**************************\n");


}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
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
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);

}

int main()
{
	test();
	return 0;
}
