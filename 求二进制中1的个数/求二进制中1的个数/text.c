#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
//int main()
//{
//	 unsigned int n = 0;
//	int count = 0;
//	scanf("%d", &n);//3 011
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &n);//(n>>i)&1
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}


int main()
{
	int n = 0;
	int count = 0;
	scanf("%d", &n);//n=n&(n-1) 1101&1100=1100 1100&1011=1000
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	printf("count=%d\n", count);
	return 0;
}