#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	printf("%u\n", num);
//	//%d�з��ŵ���������������
//	//%u��ӡ�޷�����
//	while (num)
//	{
//		printf("%d", num % 10);
//		num = num / 10;
//	}
//
//	return 0;
//}
void print(unsigned int n)
{   
  if (n > 9)
{
	  print(n / 10);
}
  printf("%d  ", n % 10);

}
int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);

	return 0;
}