#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//1. 打印100~200之间的素数 
//int  main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//				printf("%d ", i);
//				count++;
//		}
//	}
//	printf("count=%d\n", count);
//	system("pause");
//	return 0;
//}

//int  main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <=200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	system("pause");
//	return 0;
//}

//#include<math.h>
//
//int  main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i<=200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	system("pause");
//	return 0;
//}

//2. 输出乘法口诀表

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}

//3. 判断1000年---2000年之间的闰年

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//	}
//	printf("count=%d\n", count);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}

//day2

//1. 给定两个整形变量的值，将两个值的内容进行交换。

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	system("pause");
//	return 0;
//}

//2. 不允许创建临时变量，交换两个数的内容（附加题）

//int main()
//{
//	int a = 5;
//	int b = 3;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//	system("pause");
//	return 0;
//}


//3.求10 个整数中最大值。

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i]>arr[0])
//		{
//			int tmp = 0;
//			tmp = arr[0];
//			arr[0] = arr[i];
//			arr[i] = tmp;
//		}	
//	}
//	printf("%d\n", arr[0]);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	system("pause");
//	return 0;
//}

//4.将三个数按从大到小输出。


//int main()
//{
//	int a = 30;
//	int b = 25;
//	int c = 20;
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a,b,c);
//	system("pause");
//	return 0;
//}

//5.求两个数的最大公约数。

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	while (c = a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("最大公约数是:%d\n", b);
//	system("pause");
//	return 0;
//}

//day3
//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	Print(arr1, sz);
//	Print(arr2, sz);
//
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("\n");
//	Print(arr1, sz);
//	Print(arr2, sz);
//
//	system("pause");
//	return 0;
//}

//2. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。 

//int main()
//{
//	int i = 0;
//	double sum1 = 0;
//	double sum2 = 0;
//	double sum = 0;
//
//	for (i = 1; i <= 100; i += 2)
//	{
//		sum1 = sum1 + 1.0 / i;
//	}
//
//	for (i = 2; i <= 100; i += 2)
//	{
//		sum2 = sum2 + 1.0 / i;
//	}
//	sum = sum1 - sum2;
//	printf("%lf\n", sum);
//	system("pause");
//	return 0;
//}

//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (9 == i / 10)
//		{
//			count++;
//		}
//		if (9 == i % 10)
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	system("pause");
//	return 0;
//}