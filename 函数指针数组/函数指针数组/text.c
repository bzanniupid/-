#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int add(int x, int y)
{
	int z;
	z = x + y;
	return z;
}
int jian(int x, int y)
{
	int z;
	z = x - y;
	return z;
}
int mu(int x, int y)
{
	int z;
	z = x * y;
	return z;
}
int div(int x, int y)
{
	int z;
	z = x / y;
	return z;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	//int (*p)(int, int) = add;
	int (*p[4])(int, int) = { add,jian,mu,div };//函数指针的数组
	//p = add;/把add赋给指针变量，指针变量指向add
	//c = (*p)(a, b); //通过函数指针调用这个函数
	//printf("%d\n", c);
	//printf("%d\n",(*p)(a,b));
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d\n",(*p[i])(a,b));
	}
	return 0;
}