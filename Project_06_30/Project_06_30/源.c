#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
//void menu()
//{
//		printf("asdads 1.play dsads\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;//生成随机数
//	printf("%d\n", ret);
//	while (1)
//	{
//	printf("cai\n");
//	scanf("%d", &guess);
//	
//		if (guess < ret)
//		{
//			printf("xiao\n");
//		}
//		else if (guess > ret)
//		{
//			printf("da\n");
//		}
//		else
//		{
//			printf("dui\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//生成随机数
//	do
//	{
//		menu();
//		printf(":>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("tui\n");
//			break;
//		default:
//			printf("cuo\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	char input[20] = {0};
//
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意，你的电脑将在60秒后关机自毁，请输入：我很漂亮。以取消关机\n");
//	scanf("%s", &input);
//	if (strcmp(input, "我很漂亮") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}
//int main()
//{
//	/*char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);*/
//	char arr[20] = "hello word";
//	memset(arr + 6, 'y', 3);
//	printf("%s\n", arr);
//	return 0;
//}
int get_max(int x, int y)
{
	return(x > y ? x : y);
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int m = get_max(a, b);
	printf("%d\n", m);

	return 0;
}