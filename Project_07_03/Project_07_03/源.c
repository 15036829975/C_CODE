#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ",year);
//			}
//		}
//		 if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//int binary_search(int arr[], int k, int sz)
//{
//	int right = sz - 1;
//	int left = 0;
//	
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr,k,sz);
//	if (sz == -1)
//	{
//		printf("a");
//	}
//	else
//	{
//		printf("qq,%d\n", ret);
//	}
//
//
//	return 0;
//}
//int binary_search(int arr[], int k, int sz)//arr[]是个指针变量
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//
//		else
//		{
//			return mid;
//		}
//	}
//		return -1;
//}
//int main()
//{
//	int arr[] = {1,2,4,5,6,7,8,9,10};
//	int k = 5;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("aa");
//	}
//	else
//	{
//		printf("%d\n",ret);
//	}
//
//	return 0;
//}
void Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d", num);
	return 0;
}