#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//ÉùÃ÷
void Initboard(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL],int row,int col);