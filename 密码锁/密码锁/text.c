#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i = 0;
	char arr[20] = { 0 };

	for (i = 1; i <= 3; i++)
	{
		printf("�������룺>");
        scanf("%s", &arr);
		if (strcmp(arr, "123456") == 0)
		{
			printf("��¼�ɹ�\n");

		}
		else
		{
			printf("��¼ʧ��\n");

		}
	}
	if (i == 3)
		printf("��¼���ζ�ʧ�ܣ��˳�����\n");
	return 0;
}