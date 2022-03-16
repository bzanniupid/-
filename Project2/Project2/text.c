#include<stdio.h>
#include<string.h>
//分支和循环
int main()
{
	int age = 23;
	if (age < 18)
	{
		printf("未成年人\n");
		printf("不准谈恋爱\n");
	}
	else
	{
		if (age > 18 && age < 28)
	      printf("青年人\n");	
		else if (age > 28 && age < 50)
		  printf("壮年人\n");		
		else
		 printf("老人\n");


	}
	return 0;
}







//int main()
//{
//	int age = 100;
//	if (age < 18)
//	
//		printf("未成年人\n");
//	else
//	
//		if (age > 18 && age < 28)
//		printf("青年人\n");
//
//	else if (age > 28 && age < 50)
//		printf("壮年人\n");
//	
//	else
//		printf("老人\n");
	/*if (age < 18)
		printf("未成年\n");
	else

		printf("成年\n");*/
//	return 0;
//}