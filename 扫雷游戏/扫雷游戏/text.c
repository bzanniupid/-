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
	//�׵Ĵ���
	//����׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//����Ų��׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//���̳�ʼ��
	cshboard(mine, ROWS, COLS,'0');
	cshboard(show, ROWS, COLS,'*');
	//��ӡ����
	//dyqbboard(mine, ROW, COL);
	dyqbboard(show, ROW, COL);
	setmine(mine, ROW, COL);
	dyqbboard(mine, ROW, COL);
	//ɨ��
	findmine(mine, show,ROW, COL);
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;

		do
		{
			mune();
			printf("��ѡ��:>");
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
				printf("ѡ�����������ѡ��\n");
				break;
			}

		} while (input);

}
int main()
{
	test();
	return 0;
}