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
	char Board[ROW][COL] = { 0 };   //��������
	char ret = 0;
	InitBoard(Board, ROW, COL);     //��ʼ������
	Display_Board(Board, ROW, COL);  //��ӡ����

	while (1)
	{
		PlayerMove(Board, ROW, COL);//�����
		Display_Board(Board, ROW, COL);  //��ӡ����
		//�ж���Ӯ
		ret = ChekWin(Board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(Board, ROW, COL);//������
		Display_Board(Board, ROW, COL);  //��ӡ����
		//�ж���Ӯ
		ret = ChekWin(Board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
		     printf("�˳���Ϸ\n");
			 break;
		default:
			 printf("�������\n");
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
