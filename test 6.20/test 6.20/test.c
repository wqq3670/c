#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//void menu()
//{
//	printf("*********************************\n");
//	printf("*****  1.Add       2.Sub     ****\n");
//	printf("*****  3.Mul       4.Div     ****\n");
//	printf("*****       0.exit           ****\n");
//	printf("*********************************\n");
//
//}
//
//int Add(int x,int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{	
//		
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("��������������");
//			scanf("%d %d", &x, &y);
//			ret=Add(x, y);
//			printf("�������ĺ��ǣ�%d", ret);
//			printf("\n");
//			break;
//		case 2:
//			printf("��������������");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("�������Ĳ��ǣ�%d", ret);
//			printf("\n");
//			break;
//		case 3:
//			printf("��������������");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("�������Ļ��ǣ�%d", ret);
//			printf("\n");
//			break;
//		case 4:
//			printf("��������������");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("�����������ǣ�%d", ret);
//			printf("\n");
//			break;
//		case 0:
//			printf("�˳�����\n");
//			printf("\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			printf("\n");
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}

//void menu()
//{
//	printf("*********************************\n");
//	printf("*****  1.Add       2.Sub     ****\n");
//	printf("*****  3.Mul       4.Div     ****\n");
//	printf("*****       0.exit           ****\n");
//	printf("*********************************\n");
//
//}
//
//enum opoin
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//			printf("��������������");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("�������ĺ��ǣ�%d", ret);
//			printf("\n");
//			break;
//		case SUB:
//			printf("��������������");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("�������Ĳ��ǣ�%d", ret);
//			printf("\n");
//			break;
//		case MUL:
//			printf("��������������");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("�������Ļ��ǣ�%d", ret);
//			printf("\n");
//			break;
//		case DIV:
//			printf("��������������");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("�����������ǣ�%d", ret);
//			printf("\n");
//			break;
//		case EXIT:
//			printf("�˳�����\n");
//			printf("\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			printf("\n");
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}
//


//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//
//int main()
//{
//	int ret = 0;
//	ret = check_sys();
//
//	 if (ret == 1)
//		printf("С��\n");
//	 else
//		printf("���\n");
//
//	system("pause");
//	return 0;
//}


//��������д
int  check_sys()
{
	union
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}

int main()
{
	int ret = 0;
	ret = check_sys();

	 if (ret == 1)
		printf("С��\n");
	 else
		printf("���\n");

	system("pause");
	return 0;
}




