#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��һ������
//	int **ppa=&pa;//ppa��һ������ָ�����
//
//	**ppa = 20;
//	/**pa = 20;
//	printf("%d  ", *pa);*/
//
//	return 0;
//}
//���ָ����������ָ������
int main()
{
	int a = 10;
	int b = 20;
	int arr[10];
	int* pa = &a;
	int* pb = &b;
	//parr���Ǵ��ָ������飻
	int* parr[10] = {&a,&b};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *parr[i]);
	}


	return 0;
}