#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
//��ӡ����
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
	
	//����Ĵ����൱�ڰ���д���ˣ�����Ĵ�������Ż�
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
//��ʼ������
void InitBoard(char Board[ROW][COL], int row, int col)
{
	//һ���ʼ���ķ�ʽ
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

	//�ÿ⺯������ʼ��
	memset(&Board[0][0], ' ', row*col*sizeof(Board[0][0]));

}

//�����

void PlayerMove(char Board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("����ߣ�\n");
	
	while (1)
	{
		printf("������Ҫ�ߵ�����:");
		scanf("%d%d", &x, &y);
		//�ж�����ĺϷ���
		if (x >= 1 && x <= row &&y >= 1 && y <= col)
		{
			//�ж������Ƿ�ռ��
			if (Board[x - 1][y - 1] == ' ')
			{
				Board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����ѱ�ռ�ã����������룺\n");
			}
		}
		else
		{
			printf("���������������������룺\n");
		}
	}
}

//������

void ComputerMove(char Board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����ߣ�\n");
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

//�ж���Ӯ
char ChekWin(char Board[ROW][COL], int row, int col)
{
	//�ж�һ�����
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (Board[i][0] == Board[i][1] && Board[i][1] == Board[i][2] && Board[i][1] != ' ')
		{
			return Board[i][0];
		}
	}

	//�ж�һ�����

	for (i = 0; i < col; i++)
	{
		if (Board[0][i] == Board[1][i] && Board[1][i] == Board[2][i]&&Board[1][i] != ' ')
		{
			return Board[0][i];
		}
	}
	//�ж϶Խ����Ƿ����

	if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2]&&Board[1][1]!=' ')
	{
		return Board[1][1];
	}
	if (Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0] && Board[1][1] != ' ')
	{
		return Board[1][1];
	}
	//ƽ��
	if (IsFull(Board,row,col) == 1)
	{
		return 'Q';
	}
	//����
	return 'C';
}