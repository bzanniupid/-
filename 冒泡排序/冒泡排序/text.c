#include<stdio.h>

void maopao(int arr[], int se)
{
	int i = 0;//ȷ��ð�����������
	for (i = 0; i < se - 1; i++)
	{
		int flag = 1;//������һ���Ѿ�����
		//ÿһ��ð������
		int j = 0;
		for (j = 0; j < se - 1 - i; j++)//��ȥѭ������
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//����������ȫ����
			}
		}
	}

}
int main()
{
	int arr[] = { 1,2,3,4,5,7,6,8,9 ,10};
	int i = 0;
	int se = sizeof(arr) / sizeof(arr[0]);
	maopao(arr, se);
	for (i = 0; i < se; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}