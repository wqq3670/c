#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���� 
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���

//void Multiplication(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int input = 0;
//	printf("�����룺");
//	scanf("%d", &input);
//	Multiplication(input);
//	return 0;
//}

//2.ʹ�ú���ʵ���������Ľ�����

//��������ʱ������
//void Swap(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������Ҫ��������������");
//	scanf("%d %d", &a, &b);
//	printf("a=%d  b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d  b=%d\n", a, b);
//	return 0;
//}

//��������ʱ���������
//void Swap(int* x, int* y)
//{
//	*x = *x ^ *y;
//	*y = *x ^ *y;
//	*x = *x ^ *y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������Ҫ��������������");
//	scanf("%d %d", &a, &b);
//	printf("a=%d  b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d  b=%d\n", a, b);
//	return 0;
//}

//3.ʵ��һ�������ж�year�ǲ������ꡣ

//int Is_leapyear(int n)
//{
//
//	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//int main()
//{
//	int year = 0;
//	int ret = 0;
//	printf("������Ҫ�жϵ���ݣ�");
//	scanf("%d", &year);
//	ret = Is_leapyear(year);
//	if (0 == ret)
//	{
//		printf("��������\n");
//	}
//	if (1 == ret)
//	{
//		printf("������\n");
//	}
//	return 0;
//}


//4.
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��

//void Print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
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
//	int left = 0;
//	int right = sz - 1;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (left <= right)
//		{
//			int tmp = 0;
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr,sz);
//
//	Init(arr,sz);
//	Print(arr,sz);
//
//	Reverse(arr,sz);
//	Print(arr,sz);
//
//	Empty(arr,sz);
//	Print(arr,sz);
//	
//	return 0;
//}

//5.ʵ��һ���������ж�һ�����ǲ���������

#include<math.h>

int Is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (0 == n%j)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int num = 0;
	int ret = 0;
	printf("������һ������");
	scanf("%d", &num);
	ret = Is_prime(num);
	if (0 == ret)
	{
		printf("��������\n");
	}
	if (1 == ret)
	{
		printf("������\n");
	}

	return 0;
}