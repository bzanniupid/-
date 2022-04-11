#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//qsort是库函数用于排序
struct stu
{
	char name[50];
	int age;

};
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1, const void* e2)//void*可以接收任何类型的地址，不能进行解引用操作，不能进行+-整数的操作
{
	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
}

void test1()
{
	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
  qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);//指向要排序的数组的第一个元素的指针
	//qsort(s, sz, sizeof(s[0]),cmp_stu_by_age);
	int j = 0;
	for (j = 0; j < sz;j++)
	{
		printf("%s ", s[j].name);
		//printf("%d ", s[j].age);
	}
}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test2()
//{
//	int arr[] = { 1,2,3,5,0,6,8,7,4,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
int main()
{
	test1();
	//test2();
	return 0;
}