#include<stdio.h>
#include<string.h>
//��֧��ѭ��
int main()
{
	int age = 23;
	if (age < 18)
	{
		printf("δ������\n");
		printf("��׼̸����\n");
	}
	else
	{
		if (age > 18 && age < 28)
	      printf("������\n");	
		else if (age > 28 && age < 50)
		  printf("׳����\n");		
		else
		 printf("����\n");


	}
	return 0;
}







//int main()
//{
//	int age = 100;
//	if (age < 18)
//	
//		printf("δ������\n");
//	else
//	
//		if (age > 18 && age < 28)
//		printf("������\n");
//
//	else if (age > 28 && age < 50)
//		printf("׳����\n");
//	
//	else
//		printf("����\n");
	/*if (age < 18)
		printf("δ����\n");
	else

		printf("����\n");*/
//	return 0;
//}