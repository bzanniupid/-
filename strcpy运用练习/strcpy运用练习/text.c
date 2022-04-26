#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strcpy(char* s1, const char* s2)
{
	assert(s1 != NULL);
	assert(s2 != NULL);
	char* ret = s1;
	while (*s1++ = *s2++)
	{
		;
	}
	return ret;

}
int main()
{
	char arr1[] = "#########";
	char arr2[] = "世界你好";
	my_strcpy(arr1, arr2);//字符串复制
	printf("%s\n", arr1);
	return 0;
}