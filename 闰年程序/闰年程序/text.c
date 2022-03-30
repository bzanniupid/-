#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//能被四整除的年份且不能被一百整除的年份就是闰年
	//能被四百整除的年份就是闰年
	int y = 0;
	int count = 0;
	for (y == 1000; y <= 2000; y++)
	{
		if (y % 4 == 0 && y % 100 != 0)
		{
			printf("%d\n", y);
			count++;
		}
		else if (y % 400 == 0)
		{
			printf("%d\n", y);
			count++;
		}
	}
	printf("count=%d\n", count);
	
	return 0;

}