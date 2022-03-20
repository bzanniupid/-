#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void meun()
{
	printf("*********************\n");
	printf("***1.play   0.exit***\n");
	printf("*********************\n");
}
void geam()
{
	int ret = 0;
	ret = rand() % 100 + 1;//rand生成随机数
	int guess=0;
	while (1)
	{
		printf("请猜数字:");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{

			printf("猜小了\n");
		}
		else 
		{

			printf("恭喜你，猜对了！\n");
			break;
		}
	}
	//printf("%d\n", ret);

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//拿时间戳来设置随机数的生成起点
	do
	{
		meun();
		
	   
		printf("请输入:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			geam();
			break;
		case 0:
			printf("推出游戏\n");
		default:
			printf("选择错误\n");
				break;
		}



	} 
	
	
	
	while (input);
	return 0;
}