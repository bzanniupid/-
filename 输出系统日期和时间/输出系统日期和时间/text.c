#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

void test()
{
	int cmd[4] = { 0,1,2,3 };
	int num;
	struct tm* systime;//Ϊtm�ͽṹָ��,��������ʱ��ת��Ϊϵͳʱ��
	printf("�����Ҫ����������0��\n");
	
	while (1)
	{
		scanf("%d", &num);
		if (cmd[0] == num)
		{
			printf("��������1��ʾϵͳ���ڣ���������2��ʾϵͳʱ�䣬��������3�˳�ϵͳ��\n");
			//��ʾ��Ϣ
		}
		else if (cmd[1] == num)
		{
			time_t nowtime;//����������nowtime����ʱ�䣬Ϊ	time_t ����
			time(&nowtime);//time(&nowtime)--��ϵͳ����time����
			systime = localtime(&nowtime);// localtime(&nowtime)--��ϵͳ����
			printf("ϵͳ����: %d-%d-%d\n", 1900 + systime->tm_year, systime->tm_mon + 1, systime->tm_mday);

		}
		else if (cmd[2] == num)
		{
			time_t nowtime;//����������nowtime����ʱ�䣬Ϊ	time_t ����
			time(&nowtime);
			systime = localtime(&nowtime);
			printf("ϵͳʱ��: %d:%d:%d\n", systime->tm_hour, systime->tm_min, systime->tm_sec);
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