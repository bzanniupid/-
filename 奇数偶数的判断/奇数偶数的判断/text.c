#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int i = 0;

	while (i <= 100)
	{
		if (i % 2 != 0)
			printf("%d\n", i);
		i++;
		//printf("%d\n", i);
		//i = i + 2;
	}
	return 0;
}