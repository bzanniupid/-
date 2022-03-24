#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
#include<stdio.h>
void mune()
{
	printf("*************************\n");
	printf("***1.play       0.exit***\n");
	printf("*************************\n");
}

void game()
{
	char ret=0;
	char board[ROW][COL] = { 0 };
	qipanboard(board, ROW, COL);
	dyqpboard(board, ROW, COL);
	while (1)
	{
		wjxqboard(board, ROW, COL);
		dyqpboard(board, ROW, COL);
		ret = syboard(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		dnxqboard(board, ROW, COL);
		dyqpboard(board, ROW, COL);
		ret = syboard(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
   }
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	while (1)
	{

		do
		{
			mune();
			printf("请选择:");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("输入错误，请重新输入\n");
				break;
			}

		} while (input);
	}


	/*do
	{
		mune();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);*/
}
int main()
{
	test();
	return 0;
}