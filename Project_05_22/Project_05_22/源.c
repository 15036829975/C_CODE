#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	printf("%d\n",strlen("c:\test\628\test.c"));//%d-��ӡ����
//	return 0;
//}


//ѭ�����
//int main()
//{
//	int line = 0;
//	printf("5��ѧϰ");	
//	while (line<20000)
//	{
//		printf("д����\n",line);
//		line++;
//	}
//	if (line==20000)
//	{
//		printf("������\n");
//	}
//	return 0;
//}

//����
 int add(int x, int y)//int�������ͣ�add��������(int x, int y)���������� 
	
	
{
	int z = 0;
	z = x + y;
	return z;
}   //int z = 0;
	// z = x + y;
    //return z;//������
int main()
{
	int n1 = 0;
	int n2 = 0;
	scanf("%d %d", &n1,&n2);//���
	//int num = n1 + n2;
	int sum = add(n1, n2);
	printf("%d\n",sum);//��ӡ
	return 0;
}