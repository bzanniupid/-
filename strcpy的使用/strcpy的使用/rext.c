#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//
//	}
//	*dest = *src;
//
//}
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++=*src++)
//	{
//		;
//
//	}
//
//}
//void my_strcpy(char* dest, char* src)
//{
//	if(dest!=NULL&&src!=NULL)
//	{ 
//		while (*dest++ = *src++)
//		{
//			;
//
//		}
//
//	}
//	
//}
char* my_strcpy(char* dest,const char* src)
{
	char* ret = dest;
	assert(dest != NULL);//��ָ֤�����Ч�ԣ����ԣ�
	assert(src != NULL);
	while (*dest++=*src++)
	{
		;

	}
	return ret;
}
int main()
{
	//strcpy���ַ�������
	char arr1[] = "####################";
	char arr2[] = "��ϲ����";
	//strcpy(arr1, arr2);
	//printf("%s\n", arr1);
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}