#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void mune()
{
	printf("*******************************\n");
	printf("***         1.play          ***\n");
	printf("***         0.exit          ***\n");
	printf("*******************************\n");
}

void game()
{
	//雷的储存
	//存放雷的信息
	char mine[ROWS][COLS] = { 0 };
	//存放排查雷的信息
	char show[ROWS][COLS] = { 0 };
	//棋盘初始化
	cshboard(mine, ROWS, COLS,'0');
	cshboard(show, ROWS, COLS,'*');
	//打印棋盘
	//dyqbboard(mine, ROW, COL);
	dyqbboard(show, ROW, COL);
	setmine(mine, ROW, COL);
	dyqbboard(mine, ROW, COL);
	//扫雷
	findmine(mine, show,ROW, COL);
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;

		do
		{
			mune();
			printf("请选择:>");
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
				printf("选择错误，请重新选择\n");
				break;
			}

		} while (input);

}
int main()
{
	test();
	return 0;
}