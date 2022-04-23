#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int money = 0;//Ç®
	int total = 0;//ÆûË®
	int huanqs = 0;//¿ÕÆ¿
	scanf("%d", &money);
	/*if (money == 0)
	total = 0;
	else
	total = 2 * money - 1;
	printf("total=%d\n", total);*/
	//Âò»ØÀ´µÄÆûË®ºÈµô
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