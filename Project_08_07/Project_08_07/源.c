#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一级变量
//	int **ppa=&pa;//ppa是一个二级指针变量
//
//	**ppa = 20;
//	/**pa = 20;
//	printf("%d  ", *pa);*/
//
//	return 0;
//}
//存放指针的数组就是指针数组
int main()
{
	int a = 10;
	int b = 20;
	int arr[10];
	int* pa = &a;
	int* pb = &b;
	//parr就是存放指针的数组；
	int* parr[10] = {&a,&b};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *parr[i]);
	}


	return 0;
}