#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int test()
//{
//	int a = 2;
//	return &a;
//}
int main()
{
	int arr[2] = { 0 ,2};
	int* p = arr;
	*p = 1;
	printf("%d\n", arr[0]);
	//int a = 1;
	//int* p = &a;//ȡ��ַa�ŵ�p����
	//*p = 2;
	//printf("%d\n", a);
	//printf("%d\n", *p);
	/*printf("%d\n", *p);*/
	
	

	return 0;
}