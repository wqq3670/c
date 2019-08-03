


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

//初始化
void InitBoard(char Board[ROWS][COLS], int rows, int cols, char set);
//打印界面
void Display_Board(char Board[ROWS][COLS], int row, int col);
//设置雷
void SetMine(char mine[ROWS][COLS], int row, int col);
//排雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);