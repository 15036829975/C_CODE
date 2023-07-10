#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int fat(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * fac(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fat(n);
	printf("ret=%d\n", ret);
	return 0;
}