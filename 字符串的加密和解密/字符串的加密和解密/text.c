#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//字符串加密和解密
//首先定义两个数字一个是存放明文应该是存放密文的数组
int main()
{
	int num;
	int i = 0;
	char arr1[128] = "0";
	char arr2[128] = "0";
	int se=0;
	while (1)
	{
		//输入1加密新的明文，输入2对加密的密文解密，输入3退出系统
		printf("输入1加密新的明文，输入2对加密的密文解密，输入3退出系统\n");
		printf("请输入命令：\n");
		scanf("%d", &num);
		if (1 == num)
		{
			printf("请输入要加密的明文：>\n");
			scanf("%s", &arr1);
			se = strlen(arr1);
			for (i = 0; i < se; i++)
			{
				arr2[i] = arr1[i] + i + 5;
			}
			arr2[i] = '\n';
			printf("加密后的密文是：%s\n", arr2);
		}
		else if (2 == num)
		{
			se = strlen(arr1);
			for (i = 0; i < se; i++)
			{
				arr1[i] = arr2[i] - i - 5;

			}
			arr1[i] = '\n';
			printf("解密后的明文：%s\n", arr1);
		}
		else if(3 == num)
		{
			printf("退出系统\n");
			break;
		}
		else
		{
			printf("输入错误,请重新输入：\n");
		}

	}
	return 0;
}