#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void menu()
{
	printf("******************************\n");
	printf("**1.add                2.sub**\n");
	printf("**3.mu1                4.div**\n");
	printf("***        5.exit         ****\n");
	printf("******************************\n");
}

int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mu1(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void calc(int (*pf)(int, int))//�ص�������ͨ������ָ����ú���
{
	int x = 0;
	int y = 0;
	printf("��������������>");
	scanf("%d%d", &x, &y);
	printf("%d\n", (*pf)(x, y));
}
int main()
{
	int input = 0;
	/*int x = 0;
	int y = 0;*/
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(add);
			//printf("��������������>");
			//scanf("%d%d", &x, &y);
			//printf("%d\n", add(x, y));
			break;
		case 2:
			calc(sub);
			//printf("��������������>");
			//scanf("%d%d", &x, &y);
			//printf("%d\n", sub(x, y));
			break;
		case 3:
			calc(mu1);
			//printf("��������������>");
			//scanf("%d%d", &x, &y);
			//printf("%d\n", mu1(x, y));
			break;
		case 4:
			calc(div);
			//printf("��������������>");
			//scanf("%d%d", &x, &y);
			//printf("%d\n", div(x, y));
			break;
		case 5:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);
	return 0;
}