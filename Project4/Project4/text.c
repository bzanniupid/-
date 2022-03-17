#include<stdio.h>
int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{

	int a = 10;
	int b = 20;
	int c = max(a, b);
	printf("max=%d\n", c);
	return 0;
}

