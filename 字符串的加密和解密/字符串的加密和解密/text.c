#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//�ַ������ܺͽ���
//���ȶ�����������һ���Ǵ������Ӧ���Ǵ�����ĵ�����
int main()
{
	int num;
	int i = 0;
	char arr1[128] = "0";
	char arr2[128] = "0";
	int se=0;
	while (1)
	{
		//����1�����µ����ģ�����2�Լ��ܵ����Ľ��ܣ�����3�˳�ϵͳ
		printf("����1�����µ����ģ�����2�Լ��ܵ����Ľ��ܣ�����3�˳�ϵͳ\n");
		printf("���������\n");
		scanf("%d", &num);
		if (1 == num)
		{
			printf("������Ҫ���ܵ����ģ�>\n");
			scanf("%s", &arr1);
			se = strlen(arr1);
			for (i = 0; i < se; i++)
			{
				arr2[i] = arr1[i] + i + 5;
			}
			arr2[i] = '\n';
			printf("���ܺ�������ǣ�%s\n", arr2);
		}
		else if (2 == num)
		{
			se = strlen(arr1);
			for (i = 0; i < se; i++)
			{
				arr1[i] = arr2[i] - i - 5;

			}
			arr1[i] = '\n';
			printf("���ܺ�����ģ�%s\n", arr1);
		}
		else if(3 == num)
		{
			printf("�˳�ϵͳ\n");
			break;
		}
		else
		{
			printf("�������,���������룺\n");
		}

	}
	return 0;
}