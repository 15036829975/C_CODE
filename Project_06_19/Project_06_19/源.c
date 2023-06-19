#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int k = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid < k])
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("ff");
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("ssa");
//	}
//	return 0;
//}
#include<stdlib.h>
#include<windows.h>
//int main()
//{
//	char arr1[] = { "welcome to bit" };
//	char arr2[] = { "##############" };
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while(left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//
//	}
//	return 0;
//}
#include<string.h>
int main()
{
	int i = 0;
	char password[] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("qweq");
		scanf("%s",password);
		if (strcmp(password,"abcd") == 0)
		{
			printf("abcd");
			break;
		}
		else
		{
			printf("1233");
		}
		if (i == 3)
		{
			printf("asdads\n");
		}
	}


	return 0;
}