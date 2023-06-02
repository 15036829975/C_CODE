#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//struct stu
//{
//	char name[20];
//	int age;
//	char sex[22];
//	char tele[11];
//};
//void print(struct stu* p)
//{
//	printf("%s %d %s %s\n", p->name, p->age, p->sex, p->tele);
//
//
//}
//int main()
//{
////	int a = 9;
//////&a;
//////	printf("%p\n", &a);
////	
////
////
////	int * p = &a;//p:指针变量
////	*p = 20;
////	printf("% d\n", a);
//	/*printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(float*));*/
//
//	struct stu s = { "asdahj",29,"as","123" };
//	//&s;
//	//struct stu* p = &s;
//	print(&s);
//
//	/*printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);*/
//	return 0;
//}
int main()
{
	int a =0;
	printf("凌梦漂亮吗?\n");
	printf("漂亮输入 1,不漂亮输入 0\n");
	scanf("%d", &a);
	if (a ==1)
	{
		printf("可以的，眼光不错\n");
		printf("^-^\n");

	}
	else
	{

		printf("麻烦去医院看看眼，最好把脑子也查查\n");
 }



	return 0;
}

//int main()
//{
//    float a;
//    scanf("%f", &a);
//    printf("%.3f", a);
//
//    return 0;
//}