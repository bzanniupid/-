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
	ret = rand() % 100 + 1;//rand���������
	int guess=0;
	while (1)
	{
		printf("�������:");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{

			printf("��С��\n");
		}
		else 
		{

			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
	//printf("%d\n", ret);

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//��ʱ�����������������������
	do
	{
		meun();
		
	   
		printf("������:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			geam();
			break;
		case 0:
			printf("�Ƴ���Ϸ\n");
		default:
			printf("ѡ�����\n");
				break;
		}



	} 
	
	
	
	while (input);
	return 0;
}