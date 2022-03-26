#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void cshboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void dyqbboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <=col; j++)
		{
			printf("%c ", board[i][j]);

		}
		printf("\n");
	}

}
void setmine(char board[ROWS][COLS], int row, int col)
{

	int count = ease_count;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}

}
int getminecount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';



}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - ease_count)
	{
		printf("�������Ų��׵�����:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻��ը����\n");
				dyqbboard(mine, row, col);
				break;
			}
			else
			{
				int count = getminecount(mine, x, y);
				show[x][y] = count + '0';
				dyqbboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("��������Ƿ������������룡\n");
		}
	}
 if (win == row * col - ease_count)
 {
	 printf("��ϲ�㣬���׳ɹ�\n");
	 dyqbboard(mine, row, col);
 }
}