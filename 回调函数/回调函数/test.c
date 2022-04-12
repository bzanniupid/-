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
void calc(int (*pf)(int, int))//回调函数，通过函数指针调用函数
{
	int x = 0;
	int y = 0;
	printf("请输入两个数：>");
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
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(add);
			//printf("请输入两个数：>");
			//scanf("%d%d", &x, &y);
			//printf("%d\n", add(x, y));
			break;
		case 2:
			calc(sub);
			//printf("请输入两个数：>");
			//scanf("%d%d", &x, &y);
			//printf("%d\n", sub(x, y));
			break;
		case 3:
			calc(mu1);
			//printf("请输入两个数：>");
			//scanf("%d%d", &x, &y);
			//printf("%d\n", mu1(x, y));
			break;
		case 4:
			calc(div);
			//printf("请输入两个数：>");
			//scanf("%d%d", &x, &y);
			//printf("%d\n", div(x, y));
			break;
		case 5:
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);
	return 0;
}