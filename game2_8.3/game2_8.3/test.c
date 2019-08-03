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
	char mine[ROWS][COLS] = { 0 };//���ú��׵���Ϣ----��ʼ����'0'
	char show[ROWS][COLS] = { 0 };//�Ų���׵���Ϣ----��ʼ����'*'
	//��ʼ����������
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
    //��ӡ����
	Display_Board(show, ROW, COL);
	printf("\n");
	//1.������
	SetMine(mine, ROW, COL);
	//Display_Board(mine, ROW, COL);

	//2.����
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//ʱ��������������׵��������
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("�������������ѡ��\n");

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
