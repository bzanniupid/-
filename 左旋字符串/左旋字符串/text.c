#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
//��Ŀ����
//ʵ��һ�����������������ַ����е�k���ַ�
//�磺abcd->bcda

//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//		for (i = 0; i < k; i++)
//		{
//			����һ���ַ�
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
//������ת��
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
	reverse(arr, arr + k - 1);//�������
	reverse(arr+k, arr + len - 1);//�����ұ�
	reverse(arr, arr + len - 1);//��������

}

int main()
{
	char arr[] = "abcdef";
	printf("%s\n", arr);
	left_move(arr, 5);
	printf("%s\n", arr);
	return 0;
}