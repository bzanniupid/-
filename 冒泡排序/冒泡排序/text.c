#include<stdio.h>

void maopao(int arr[], int se)
{
	int i = 0;//确定冒泡排序的趟数
	for (i = 0; i < se - 1; i++)
	{
		int flag = 1;//假设这一趟已经有序
		//每一趟冒泡排序
		int j = 0;
		for (j = 0; j < se - 1 - i; j++)//减去循环趟数
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟排序不完全有序
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