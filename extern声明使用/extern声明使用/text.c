#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	extern int max(int x, int y);
	int a;
	int b;
	scanf("%d%d", &a, &b);
    int c = max(a, b);
	printf("max=%d\n", c);
	return 0;
}