#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////int main()
////{
////	int num1 = 0;
////	int num2 = 0;
////	scanf("%d%d", &num1, &num2);//输入
////	int sum = num1 + num2;
////	printf("%d\n", sum);
////	return 0;
//}
//extern int a;
//void test()
//{
//
//	printf("test%d\n", a);
//}
//int main()
//{
//	test();
//	{
//
//		printf("a=%d\n", a);
//	}
//	printf("a=%d\n", a);
//	return 0;
//}全局变量的生命周期是整个程序
//int main()
//{
//	{
//		int a =10;
//		printf("%d\n", a);
// 	}
//	return 0;
//}
//int main()
//{
	//const int a = 10;//const可以改成常量，被const的对象为常变量//
//	//printf("%d\n", a);
//	const int n = 10;
//	int a[10] = {0};
//	return 0;
//}
//#define MAX 100//标识符常量
//#define STR "acdef"
//
//	int main()
//	{
//	/*	printf("STR=%s\n",STR);*/
//		return 0;
//	}
//枚举常量
enum color
{
	male,
	female,
	secret
};
int main()
{
	enum color c = male;
	return 0;
}