#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
//初始化
void InitBoard(char Board[ROWS][COLS], int rows, int cols,char set)
{
	memset(&Board[0][0], set, rows*cols*sizeof(Board[0][0]));

}

//打印界面
void Display_Board(char Board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);	
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", Board[i][j]);
		}
		printf("\n");
	}

}

//布置雷

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = EASY_Count;//设置了三个难度
	while (count)
	{
		//生成坐标
		x = rand() % row+1;
		y = rand() % col+1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
//计算x,y坐标周围几个雷
static int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}

//排雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count1 = 0;
	int win = 0;
	while (win<row*col-EASY_Count)
	{
		printf("请输入要排查的坐标：");
		scanf("%d%d", &x, &y);
		//判断坐标的合法性
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			//判断是否为雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了，游戏结束！\n");
				Display_Board(mine, ROW, COL);
				break;
			}
			else
			{
				//计算x,y坐标周围雷的个数
				count1 = GetMineCount(mine, x, y);
				//计算好存进x,y中去
				show[x][y] = count1 + '0';
				//给用户打印出来
				Display_Board(show, ROW, COL);
				win++;
			}

		}
		else
		{
			printf("坐标输入有误，请重新输入\n");
		}
	}
	if (win == row*col - EASY_Count)
	{
		printf("恭喜你，排雷成功，游戏胜利！\n");
		Display_Board(mine, ROW, COL);
	}
	
}