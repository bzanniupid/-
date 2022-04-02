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
	assert(dest != NULL);//保证指针的有效性（断言）
	assert(src != NULL);
	while (*dest++=*src++)
	{
		;

	}
	return ret;
}
int main()
{
	//strcpy是字符串拷贝
	char arr1[] = "####################";
	char arr2[] = "我喜欢你";
	//strcpy(arr1, arr2);
	//printf("%s\n", arr1);
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}