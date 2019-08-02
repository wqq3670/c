#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
//打印棋盘
void Display_Board(char Board[ROW][COL], int row, int col)
{
	//int i = 0;
	//for (i = 0; i < row; i++)
	//{
	//	printf(" %c | %c | %c \n",Board[i][0],Board[i][1],Board[i][2]);
	//	if (i < row - 1)
	//	{
	//		printf("---|---|---\n");
	//	}
	//}
	
	//上面的代码相当于把列写死了，下面的代码进行优化
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", Board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}
//初始化棋盘
void InitBoard(char Board[ROW][COL], int row, int col)
{
	//一般初始化的方式
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			Board[i][j] = ' ';
//		}
//	}
//

	//用库函数来初始化
	memset(&Board[0][0], ' ', row*col*sizeof(Board[0][0]));

}

//玩家走

void PlayerMove(char Board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走：\n");
	
	while (1)
	{
		printf("请输入要走的坐标:");
		scanf("%d%d", &x, &y);
		//判断坐标的合法性
		if (x >= 1 && x <= row &&y >= 1 && y <= col)
		{
			//判断坐标是否被占用
			if (Board[x - 1][y - 1] == ' ')
			{
				Board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标已被占用，请重新输入：\n");
			}
		}
		else
		{
			printf("输入坐标有误，请重新输入：\n");
		}
	}
}

//电脑走

void ComputerMove(char Board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走：\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (Board[x][y] == ' ')
		{
			Board[x][y] = '#';
			break;
		}
	}
}
static int IsFull(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (Board[i][j] == ' ')
			{
				return 0;
			}

		}
	}
	return 1;
}

//判断输赢
char ChekWin(char Board[ROW][COL], int row, int col)
{
	//判断一行相等
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (Board[i][0] == Board[i][1] && Board[i][1] == Board[i][2] && Board[i][1] != ' ')
		{
			return Board[i][0];
		}
	}

	//判断一列相等

	for (i = 0; i < col; i++)
	{
		if (Board[0][i] == Board[1][i] && Board[1][i] == Board[2][i]&&Board[1][i] != ' ')
		{
			return Board[0][i];
		}
	}
	//判断对角线是否相等

	if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2]&&Board[1][1]!=' ')
	{
		return Board[1][1];
	}
	if (Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0] && Board[1][1] != ' ')
	{
		return Board[1][1];
	}
	//平局
	if (IsFull(Board,row,col) == 1)
	{
		return 'Q';
	}
	//继续
	return 'C';
}