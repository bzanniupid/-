#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define ease_count 20
void cshboard(char board[ROWS][COLS],int rows,int cols,char set);
void dyqbboard(char board[ROWS][COLS], int row, int col);
void setmine(char board[ROWS][COLS], int row, int col);
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS],int row, int col);
int getminecount(char mine[ROWS][COLS], int x, int y);