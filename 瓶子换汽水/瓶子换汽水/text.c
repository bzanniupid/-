#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int money = 0;//Ǯ
	int total = 0;//��ˮ
	int huanqs = 0;//��ƿ
	scanf("%d", &money);
	/*if (money == 0)
	total = 0;
	else
	total = 2 * money - 1;
	printf("total=%d\n", total);*/
	//���������ˮ�ȵ�
	total = money;
	huanqs = money;
	while (huanqs >= 2)
	{
		total += huanqs / 2;
		huanqs = huanqs / 2 + huanqs % 2;

	}
	printf("total=%d\n", total);
	return 0;
 }