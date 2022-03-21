#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	char arr1[] = "I Live You!!!!!!!!";
	char arr2[] = "##################";
	int sz = strlen(arr1);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);
		//system("cls");
		left++;
		right--;

	}
	return 0;
}
