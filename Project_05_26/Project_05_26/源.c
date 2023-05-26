#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//typedef unsigned int uint;
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 2;
//
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ",a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//修饰全局变量
//声明外部符号,extern可调用全局变量
//extern int ga;
//int main()
//{
//	printf("%d\n", ga);
//
//
//	return 0;
//}
//int main()
//{
//	register int num = 3;//建议3放到寄存器里
//	return 0;
//}
#define Add(x,y) ((x)+(y))//宏，Add宏名，
//define定义常量与宏
int main()
{
	//printf("%d\n", num);
	//int n = num;
	//printf("%d\n", n);
	//int arr[num] = { 2,3,1 };
	int a = 10;
	int b = 122;
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}