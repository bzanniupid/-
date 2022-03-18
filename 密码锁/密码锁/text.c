#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i = 0;
	char arr[20] = { 0 };

	for (i = 1; i <= 3; i++)
	{
		printf("ÊäÈëÃÜÂë£º>");
        scanf("%s", &arr);
		if (strcmp(arr, "123456") == 0)
		{
			printf("µÇÂ¼³É¹¦\n");

		}
		else
		{
			printf("µÇÂ¼Ê§°Ü\n");

		}
	}
	if (i == 3)
		printf("µÇÂ¼Èý´Î¶¼Ê§°Ü£¬ÍË³ö³ÌÐò\n");
	return 0;
}