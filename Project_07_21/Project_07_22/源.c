#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//数组传参数，形参有两种写法：
//1.数组
//2.指针
void bubble_sort(int arr[],int sz)
{
	
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	/*int arr[3][4] = { 1,2,3,4,5,6,7,8,1,2,3,4 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
		}

	}*/
	/*int arr[] = { 1,2,3,45,6,7 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", arr[i]);
	}*/

	/*int arr[] = { 9,8,7,6,5,4,3,1,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}*/
	
	int arr[10];
	int n = sizeof(arr);
	printf("%p\n", arr);
	printf("%p\n", arr[0]);
	printf("%p\n", &arr);
	
	return 0;
}