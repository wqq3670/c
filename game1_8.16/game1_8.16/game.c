#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//��ʼ������
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

//��ӡ����
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

//�����
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("����ߣ�\n");
	
	//�ж�����ĺϷ���
	while (1)
	{
		printf("������Ҫ�ߵ����꣺");
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
				printf("���걻ռ�ã����������룡\n");
				
			}

		}
		else
		{
			printf("����������������������!\n");
			
		}
	}
}

//������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����ߣ�\n");
	while (1)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		//�ж�����Ϸ�

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
//�ж������Ƿ�����
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

//�ж���Ӯ
char Is_Win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int ret = 0;
	//һ��
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][1];
		}
	}
	//һ��
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
			return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//ƽ��
	ret=Is_full(board, row, col);
	if (1 == ret)
	{
		return 'P';
	}
	return 'C';
}

