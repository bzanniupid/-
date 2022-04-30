#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//erron是一个全局的错误码的变量
//在c语言的库函数在执行过程中，发生了错误，就会把错误的错误码，赋值到error中，提示错误信息
int main()
{
	//打开文件
	FILE* pf = fopen("test.txt", "r");//'r'读文件
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("open file success\n");
	}
	return 0;
}