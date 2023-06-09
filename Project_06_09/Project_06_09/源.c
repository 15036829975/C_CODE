#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*int ch = 0;*/
	/*while (getchar())*/
		/*int ch = getchar();*/
	char password[20] = { 0 };
	printf("«Î ‰»Î√‹¬Î\n");
	scanf("%s", password);
	//getchar();
	int ch = 0;
	while (( ch = getchar())!= '\n')
	{
         ;
	}
	printf("«Î»∑»œ√‹¬Î\n");
	int ret = getchar();
	if ('y' == ret)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}