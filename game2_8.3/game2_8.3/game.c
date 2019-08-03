#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
//��ʼ��
void InitBoard(char Board[ROWS][COLS], int rows, int cols,char set)
{
	memset(&Board[0][0], set, rows*cols*sizeof(Board[0][0]));

}

//��ӡ����
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

//������

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = EASY_Count;//�����������Ѷ�
	while (count)
	{
		//��������
		x = rand() % row+1;
		y = rand() % col+1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
//����x,y������Χ������
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

//����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count1 = 0;
	int win = 0;
	while (win<row*col-EASY_Count)
	{
		printf("������Ҫ�Ų�����꣺");
		scanf("%d%d", &x, &y);
		//�ж�����ĺϷ���
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			//�ж��Ƿ�Ϊ��
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը���ˣ���Ϸ������\n");
				Display_Board(mine, ROW, COL);
				break;
			}
			else
			{
				//����x,y������Χ�׵ĸ���
				count1 = GetMineCount(mine, x, y);
				//����ô��x,y��ȥ
				show[x][y] = count1 + '0';
				//���û���ӡ����
				Display_Board(show, ROW, COL);
				win++;
			}

		}
		else
		{
			printf("����������������������\n");
		}
	}
	if (win == row*col - EASY_Count)
	{
		printf("��ϲ�㣬���׳ɹ�����Ϸʤ����\n");
		Display_Board(mine, ROW, COL);
	}
	
}