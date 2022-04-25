#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
//题目内容
//实现一个函数，可以左旋字符串中的k个字符
//如：abcd->bcda

//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//		for (i = 0; i < k; i++)
//		{
//			左旋一个字符
//			char tmp = *arr;
//			int j = 0;
//			for (j = 0; j < len - 1; j++)
//			{
//				*(arr + j) = *(arr + j + 1);
//			}
//			*(arr + len - 1) = tmp;
//		}
//
//}
//三步翻转法
//abcdef
//bafedc
//cdefab
void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k < len);
	reverse(arr, arr + k - 1);//逆序左边
	reverse(arr+k, arr + len - 1);//逆序右边
	reverse(arr, arr + len - 1);//逆序整体

}

int main()
{
	char arr[] = "abcdef";
	printf("%s\n", arr);
	left_move(arr, 5);
	printf("%s\n", arr);
	return 0;
}