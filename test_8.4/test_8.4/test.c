#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//1.��ɲ�������Ϸ��
//void menu()
//{
//	printf("**************************\n");
//	printf("*****     1. play   ******\n");
//	printf("*****     0. exit   ******\n");
//	printf("**************************\n");
//}
//
//
//void game()
//{
//	int x = 0;
//	int guess = 0;
//	x = rand() % 100 + 1;
//	while (1)
//	{
//		printf("�����������µ����֣�1-100����");
//		scanf("%d", &guess);
//		printf("\n");
//		if (guess > x)
//		{
//			printf("�´���\n");
//			printf("\n");
//		}
//		else if (guess < x)
//		{
//			printf("��С��\n");
//			printf("\n");
//		}
//		else
//		{
//			printf("��ϲ��¶��ˣ���������ǣ�%d\n", guess);
//			printf("\n");
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
//			printf("�˳���Ϸ\n");
//			break;
//		default :
//			printf("����������������룡\n");
//			break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}

//2.д����������������������в�����Ҫ�����֣� 
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�

//int Binary_Search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = 0;
//		mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
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
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
//	int k = 17;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	ret = Binary_Search(arr, k, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}

////3.��д����ģ��������������ĳ����� 
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺\n");
//		scanf("%s", password);
//		if (strcmp(password, "19940412") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("����������������룺\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//	system("pause");
//	return 0;
//}
//

//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������


//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'a'&&ch <= 'z')
//		{
//			putchar(ch - 32);
//		}
//		else if (ch >= 'A'&&ch <= 'Z')
//		{
//			putchar(ch + 32);
//		}
//		else if (ch >= '0'&&ch <= '9')
//		{
//			;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	system("pause");
//	return 0;
//}


//4.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���� 
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���

//void Mul(int x)
//{
//	int i = 1;
//	for (i = 1; i <= x; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//
//}
//
//int main()
//{
//	int input = 0;
//	printf("�����룺");
//	scanf("%d", &input);
//	Mul(input);
//	system("pause");
//	return 0;
//}

//5.ʹ�ú���ʵ���������Ľ�����
//void swap(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������Ҫ��������������\n");
//	scanf("%d%d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}

//6.ʵ��һ�������ж�year�ǲ������ꡣ

//void Is_Runyear(int x)
//{
//	if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//}
//int main()
//{
//	int year = 0;
//	printf("������Ҫ�жϵ���ݣ�");
//	scanf("%d", &year);
//	Is_Runyear(year);
//	system("pause");
//	return 0;
//}

//7.����һ�����飬
//ʵ�ֺ���init������ʼ�����顢1-10
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��


//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Empty(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Reverse(int arr[], int sz)
//{
//	int i = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr,sz);//��ʼ��
//	Print(arr, sz);
//
//	Reverse(arr, sz);//����
//	Print(arr, sz);
//
//	Empty(arr, sz);//���
//	Print(arr, sz);
//	system("pause");
//	return 0;
//}

