#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int hang = 0;
	scanf("%d", &hang);
	//��ӡ�ϰ벿��
	int i = 0;
	for (i = 0; i < hang; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < hang - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��ӡ�°벿��
	for (i = 0; i < hang-1; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 *(hang-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}