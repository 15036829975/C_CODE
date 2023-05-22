#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	printf("%d\n",strlen("c:\test\628\test.c"));//%d-打印整形
//	return 0;
//}


//循环语句
//int main()
//{
//	int line = 0;
//	printf("5月学习");	
//	while (line<20000)
//	{
//		printf("写代码\n",line);
//		line++;
//	}
//	if (line==20000)
//	{
//		printf("换工作\n");
//	}
//	return 0;
//}

//函数
 int add(int x, int y)//int返回类型，add函数名，(int x, int y)函数参数， 
	
	
{
	int z = 0;
	z = x + y;
	return z;
}   //int z = 0;
	// z = x + y;
    //return z;//函数体
int main()
{
	int n1 = 0;
	int n2 = 0;
	scanf("%d %d", &n1,&n2);//求和
	//int num = n1 + n2;
	int sum = add(n1, n2);
	printf("%d\n",sum);//打印
	return 0;
}