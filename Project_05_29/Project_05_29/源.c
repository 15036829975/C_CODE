#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 add(int x, int y)
{
	int c = 0;
	 c = x + y;
	return c;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = add(a,b);
	printf("%d\n", c);

	return 0;
}