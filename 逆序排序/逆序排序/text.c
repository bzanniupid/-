#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
void nixu(char* str)
{
	assert(str);//断言
	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;   //abcdef
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		*left++;
		*right--;
}
}
int main()
{
	char arr[256] = { 0 };
	//scanf("%s", arr);
	gets(arr);//读取一行
	nixu(arr);//逆序函数 
	printf("%s", arr);
	return 0;
}