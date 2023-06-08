#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1;

	while (a<=10)
	{if(5==a)
	{
		break;
	}
		printf("%d\n",a);
		a++;
	}
	return 0;
}