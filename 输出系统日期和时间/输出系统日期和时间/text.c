#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

void test()
{
	int cmd[4] = { 0,1,2,3 };
	int num;
	struct tm* systime;//为tm型结构指针,将描述的时间转换为系统时间
	printf("如果需要帮助请输入0：\n");
	
	while (1)
	{
		scanf("%d", &num);
		if (cmd[0] == num)
		{
			printf("输入数字1显示系统日期，输入数字2显示系统时间，输入数字3退出系统：\n");
			//提示信息
		}
		else if (cmd[1] == num)
		{
			time_t nowtime;//声明变量，nowtime现在时间，为	time_t 类型
			time(&nowtime);//time(&nowtime)--调系统函数time（）
			systime = localtime(&nowtime);// localtime(&nowtime)--调系统函数
			printf("系统日期: %d-%d-%d\n", 1900 + systime->tm_year, systime->tm_mon + 1, systime->tm_mday);

		}
		else if (cmd[2] == num)
		{
			time_t nowtime;//声明变量，nowtime现在时间，为	time_t 类型
			time(&nowtime);
			systime = localtime(&nowtime);
			printf("系统时间: %d:%d:%d\n", systime->tm_hour, systime->tm_min, systime->tm_sec);
		}

		else if (cmd[3] == num)
		{
			return 0;
		}
	}
}
int main()
{
	test();
	return 0;
}