#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

my_strcat(char* s1, const char* s2)
{
	assert(*s1 != NULL);
	assert(*s2 != NULL);
	char* ret = s1;
	while (*s1 != '\0')
	{
		s1++;
	}
	while (*s1++ = *s2++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "ghijk";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}