#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"Add.h"
//#pragma comment(lib,"Add.lib")//���뾲̬��
int main()
	{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("%d", sum);
	return 0;
	}
