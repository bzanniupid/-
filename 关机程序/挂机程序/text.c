#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	char input[20] = { 0 };
	system("shutdown-s-t 60");
	//again:
	while (1)
	{
		printf("��ע�⣬��ĵ�����һ�����ڹػ�,�������:��������ȡ���ػ�\n������>:");
		scanf("%s", &input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown-a");
			break;
		}
	}
	/*else
	{
		goto again;
	}*/
	return 0;
}