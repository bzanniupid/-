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
		printf("���Ӯ\n");
   }
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
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
			default:
				printf("�����������������\n");
				break;
			}

		} while (input);
	}


	/*do
	{
		mune();
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
		default:
			printf("�����������������\n");
			break;
		}

	} while (input);*/
}
int main()
{
	test();
	return 0;
}