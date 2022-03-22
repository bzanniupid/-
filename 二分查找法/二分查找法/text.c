#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int b = 5;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > b)
		{
			right = mid - 1;

		}
		else if (arr[mid] < b)
		{
			left = mid + 1;

		}
		else
		{
			printf("mid=%d\n",mid );
			break;
		}
	}
	if (left > right)
		printf("ÓÐ´íÎó\n");

	return 0;
}

