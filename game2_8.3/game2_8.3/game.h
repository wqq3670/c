


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_Count 10
#define MIDDLE_Count 30
#define HARD_Count 52

//��ʼ��
void InitBoard(char Board[ROWS][COLS], int rows, int cols, char set);
//��ӡ����
void Display_Board(char Board[ROWS][COLS], int row, int col);
//������
void SetMine(char mine[ROWS][COLS], int row, int col);
//����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);