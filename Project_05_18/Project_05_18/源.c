#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////int main()
////{
////	int num1 = 0;
////	int num2 = 0;
////	scanf("%d%d", &num1, &num2);//����
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
//}ȫ�ֱ�����������������������
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
	//const int a = 10;//const���Ըĳɳ�������const�Ķ���Ϊ������//
//	//printf("%d\n", a);
//	const int n = 10;
//	int a[10] = {0};
//	return 0;
//}
//#define MAX 100//��ʶ������
//#define STR "acdef"
//
//	int main()
//	{
//	/*	printf("STR=%s\n",STR);*/
//		return 0;
//	}
//ö�ٳ���
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