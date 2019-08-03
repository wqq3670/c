#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("*****************************\n");
	printf("*******   1. play     *******\n");
	printf("*******   0. exit     *******\n");
	printf("*****************************\n");

}

void game()
{
	char mine[ROWS][COLS] = { 0 };//布置好雷的信息----初始化放'0'
	char show[ROWS][COLS] = { 0 };//排查好雷的信息----初始化放'*'
	//初始化两个界面
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
    //打印界面
	Display_Board(show, ROW, COL);
	printf("\n");
	//1.布置雷
	SetMine(mine, ROW, COL);
	//Display_Board(mine, ROW, COL);

	//2.排雷
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//时间戳，用来设置雷的随机坐标
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default :
			printf("输入错误，请重新选择！\n");

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
