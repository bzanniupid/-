#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//erron��һ��ȫ�ֵĴ�����ı���
//��c���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѵ���Ĵ����룬��ֵ��error�У���ʾ������Ϣ
int main()
{
	//���ļ�
	FILE* pf = fopen("test.txt", "r");//'r'���ļ�
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