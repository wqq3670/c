#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void game()
{
	char ret = 0;
	//����һ������
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����Ϸ

	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//�ж���Ӯ
		ret=Is_Win(board, ROW, COL);
		if ('C' != ret)
		{
			break;
		}

		//������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		
		//�ж���Ӯ
		ret = Is_Win(board, ROW, COL);
		if ('C' != ret)
		{
			break;
		}
	}
	if ('*' == ret)
	{
		printf("���Ӯ\n");
	}
	else if ('#' == ret)
	{
		printf("����Ӯ\n");
	}
	else if ('P' == ret)
	{
		printf("ƽ��\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);

}

int main()
{
	test();
	return 0;
}
