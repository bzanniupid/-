#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//�ܱ�������������Ҳ��ܱ�һ����������ݾ�������
	//�ܱ��İ���������ݾ�������
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