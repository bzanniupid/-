#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//ͨ������Ϊ��ά����Ԫ�ظ�ֵ����ʾ��ά���飬�����ά���������Ԫ�غ���СԪ�ص�ֵ�����±꣬
//����ά����ת��Ϊ��һ����ά����



int main()
{
	int arr1[2][3];
	int arr2[3][2];            //����������ά����
	int i;
	int j;
	int max=0;
	int min=0;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("arr1[%d][%d]=", i, j);
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("�����ά���飺\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", arr1[i][j]);//\t���Ƽ��
		}
		printf("\n");
	}
	//���������Ԫ�ؼ��±�
	max = arr1[0][0];
	int h = 0;
	int l = 0;//h��l����������±��
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (max < arr1[i][j])
			{
				max = arr1[i][j];
				h = i;
				l = j;
			}
		}
	}
	printf("���ֵmax:arr1[%d][%d]=%d\n", h, l, max);   //��ӡ���ֵ������Ӧ���±�

	min = arr1[0][0];
	 h = 0;
	 l = 0;//h��l����������±��
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (min > arr1[i][j])
			{
				min = arr1[i][j];
				h = i;
				l = j;
			}
		}
	}
	printf("��Сֵmin:arr1[%d][%d]=%d\n", h, l, min);//��ӡ��Сֵ������Ӧ���±�
	
	//����ά����ת��Ϊ��һ����ά����
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			arr2[j][i] = arr1[i][j];
		}
	}
	//��ӡת���������
	printf("��ӡת���������:\n");
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 2; j++)
			{
				printf("%d\t", arr2[i][j]);//\t���Ƽ��
			}
			printf("\n");
		}

	return 0;
}