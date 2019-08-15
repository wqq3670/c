#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定， 
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。

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
//	printf("请输入：");
//	scanf("%d", &input);
//	Multiplication(input);
//	return 0;
//}

//2.使用函数实现两个数的交换。

//（创建临时变量）
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
//	printf("请输入要交换的两个数：");
//	scanf("%d %d", &a, &b);
//	printf("a=%d  b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d  b=%d\n", a, b);
//	return 0;
//}

//不创建临时变量（异或）
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
//	printf("请输入要交换的两个数：");
//	scanf("%d %d", &a, &b);
//	printf("a=%d  b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d  b=%d\n", a, b);
//	return 0;
//}

//3.实现一个函数判断year是不是润年。

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
//	printf("请输入要判断的年份：");
//	scanf("%d", &year);
//	ret = Is_leapyear(year);
//	if (0 == ret)
//	{
//		printf("不是闰年\n");
//	}
//	if (1 == ret)
//	{
//		printf("是闰年\n");
//	}
//	return 0;
//}


//4.
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。

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

//5.实现一个函数，判断一个数是不是素数。

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
	printf("请输入一个数：");
	scanf("%d", &num);
	ret = Is_prime(num);
	if (0 == ret)
	{
		printf("不是素数\n");
	}
	if (1 == ret)
	{
		printf("是素数\n");
	}

	return 0;
}