#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}

	//memset(&board[0][0], ' ', row*col*(board[0][0]));
}

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	/*int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if (i < row - 1)
		{
			printf("---|---|---\n");
		}
	}*/

	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
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

//玩家走
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走：\n");
	
	//判断坐标的合法性
	while (1)
	{
		printf("请输入要走的坐标：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入！\n");
				
			}

		}
		else
		{
			printf("输入坐标有误，请重新输入!\n");
			
		}
	}
}

//电脑走
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走：\n");
	while (1)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		//判断坐标合法

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
//判断棋盘是否满了
static int Is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return -1;
			}
		}
	}
	return 1;
}

////判断输赢
//char Is_Win(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int ret = 0;
//	//一行
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
//		{
//			return board[i][1];
//		}
//	}
//	//一列
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
//		{
//			return board[1][i];
//		}
//	}
//	//对角线
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//	{
//			return board[1][1];
//	}
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	//平局
//	ret=Is_full(board, row, col);
//	if (1 == ret)
//	{
//		return 'P';
//	}
//	return 'C';
//}


//判断输赢
char Is_Win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int n=ROW;
	int ret = 0;
	//一行
	for (i = 0; i < row; i++)
	{
		for (j = 1; j < col-1; j++)
		{
			if ((board[i][j - 1] == board[i][j]) && (board[i][j] == board[i][j + 1]) && board[i][j] != ' ')

			return board[i][j];
		}
	}
	//一列
	for (j = 0; i < col; j++)
	{
		for (i = 1; i < row - 1; i++)
		{
			if (board[i - 1][j] == board[i][j] && board[i][j] == board[i+1][j] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}
	//对角线
	for (i = 1; i < row - 1; i++)
	{
		for (j = 1; j < col - 1; j++)
		{
			if (board[i - 1][j - 1] == board[i][j] && board[i][j] == board[i + 1][j + 1] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}

	for (i = 1; i < row - 1; i++)
	{
		for (j = col - 1; j > 0; j--)
		{
			if (board[i - 1][j + 1] == board[i][j] && board[i][j] == board[i + 1][j - 1] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}


//平局
	ret = Is_full(board, row, col);
	if (1 == ret)
	{
		return 'P';
	}
	return 'C';
}
