#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//1.��ɲ�������Ϸ��

//void menu()
//{
//	printf("************************\n");
//	printf("*****    1. play   *****\n");
//	printf("*****    0. exit   *****\n");
//	printf("************************\n");
//}
//
//void game()
//{
//	//1.���������(1-100)
//	int num = 0;
//	int guess = 0;
//	num = rand()%100+1;
//
//	while (1)
//	{
//		printf("�����������µ�����(1-100)��");
//		scanf("%d", &guess);
//		if (guess > num)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < num)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}


//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��\n");
//			break;
//		default:
//			printf("ѡ��������������룡\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}
//

//2.д����������������������в�����Ҫ�����֣� 
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�

//int binary_search(int* arr, int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (right - left) / 2 + left;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}	
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 52;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	ret = binary_search(arr, k, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//
//	return 0;
//}

//3.��д����ģ��������������ĳ����� 
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����

//#include<string.h>
//int main()
//{
//	int i = 0;
//	char arr[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", arr);
//		if (strcmp(arr, "19940412") == 0)
//		{
//			printf("��½�ɹ���\n");
//			break;
//		}
//		else
//		{
//			printf("��������������������룡\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("������������˳�����\n");
//	}
//
//	return 0;
//}

//4.��дһ�����򣬿���һֱ���ռ����ַ��� 
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������

//int main()
//{
//	char ch = 0;
//	
//	while (ch != EOF)
//	{
//		ch = getchar();
//		if (ch<'z'&&ch>'a')
//		{
//			putchar(ch - 32);
//		}
//		else if (ch > 'A'&&ch < 'Z')
//		{
//			putchar(ch + 32);
//		}
//		else if (ch<'9'&&ch>'0')
//		{
//			;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	return 0;
//}