#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int hang = 0;
	scanf("%d", &hang);
	//打印上半部分
	int i = 0;
	for (i = 0; i < hang; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j < hang - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分
	for (i = 0; i < hang-1; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 *(hang-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}