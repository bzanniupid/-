#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//通过键盘为二维数组元素赋值，显示二维数组，求出二维数组中最大元素和最小元素的值及其下标，
//将二维数组转换为另一个二维数组



int main()
{
	int arr1[2][3];
	int arr2[3][2];            //定义两个二维数组
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
	printf("输出二维数组：\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", arr1[i][j]);//\t控制间距
		}
		printf("\n");
	}
	//求数组最大元素及下标
	max = arr1[0][0];
	int h = 0;
	int l = 0;//h、l是用来存放下标的
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
	printf("最大值max:arr1[%d][%d]=%d\n", h, l, max);   //打印最大值及所对应的下标

	min = arr1[0][0];
	 h = 0;
	 l = 0;//h、l是用来存放下标的
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
	printf("最小值min:arr1[%d][%d]=%d\n", h, l, min);//打印最小值及所对应的下标
	
	//将二维数组转换为另一个二维数组
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			arr2[j][i] = arr1[i][j];
		}
	}
	//打印转换后的数组
	printf("打印转换后的数组:\n");
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 2; j++)
			{
				printf("%d\t", arr2[i][j]);//\t控制间距
			}
			printf("\n");
		}

	return 0;
}