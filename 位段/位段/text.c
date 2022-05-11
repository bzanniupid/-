#include<stdio.h>
#include<string.h>
//位段节省空间
struct s
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
struct d
{
	int a : 2;
	int b : 5;
	int c : 10;
	int d : 30;
};
int main()
{
	struct s s = { 0 };
	struct d d = { 0 };

	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;
	printf("%d\n", sizeof(s));
	printf("%d\n", sizeof(d));
	return 0;
}