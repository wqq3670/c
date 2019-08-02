
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


#define ROW 3
#define COL 3


void Display_Board(char Board[ROW][COL], int row, int col);

void InitBoard(char Board[ROW][COL], int row, int col);

void PlayerMove(char Board[ROW][COL], int row, int col);

void ComputerMove(char Board[ROW][COL], int row, int col);

char ChekWin(char Board[ROW][COL], int row, int col);
