#include<stdio.h>
#include<string.h>
#include<assert.h>
//abbcdef
//bc
char* my_strstr(const char* p1, const char* p2)
{
	//assert(p1 && p2);//是相等的与assert(p1 != NULL)
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* s1 = p1;
	char* s2 = p2;
	char* cur = p1;//放p1的位置

	//首先p2要不等于\0；
	while (*p2 =='\0')
	{
		return p1;
	}
	//其次p1也不能为\0;
	while (*cur!='\0')
	{
		s1 = cur;
		s2 = p2;
		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;

		}
		if (*s2 == '\0')
		{
			return cur;//找到字符串
		}
		cur++;
	}
	return NULL;//找不到字符串
}
int main()
{
	char* p1 = "abbcdef";
	char* p2 = "bc";
	char* ret = my_strstr(p1, p2);//模拟实现
	printf("%s", ret);
	return 0;
}