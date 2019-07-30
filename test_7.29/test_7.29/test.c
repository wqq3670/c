#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


//1.求斐波那契数列

//int fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入一个数\n");
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//2.
//int main()
//{
//	int i, j, a = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (j % 2)
//				break;
//			a++;
//		}
//		a++;
//	}
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}

//3.给定两个整形变量的值，将两个值的内容进行交换。

   //创建临时变量
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int tmp = 0;
//	printf("请输入要交换的两个数\n");
//	scanf("%d %d", &a, &b);
//
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("%d %d", a, b);
//
//	system("pause");
//	return 0;
//}

//不创建临时变量，用异或
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入要交换的两个数\n");
//	scanf("%d %d", &a, &b);  //a=3   011
//                            // b=5   101
//	a = a^b;                //a'=     110
//	b = a^b;                //b'=     011=3=a
//	a = a^b;                //a''=    101=5=b
//
//	//实现了交换
//	printf("%d %d", a, b);
//
//	system("pause");
//	return 0;
//}

//但是不提倡使用后者，没有前者的通俗易懂  不便于理解

//利用加减的方式(这段代码的优点在于简单易懂)
//              缺点是，如果所给的 a  b过于大，超过了int的范围，就会出现错误，与之前的加减法求平均数缺陷一样
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入要交换的两个数\n");
//	scanf("%d %d", &a, &b);  //a=3  b=5
//	
//	a = a + b;//a'=8  b=5
//	b = a - b; //b'=a'-b=8-5=3
//	a = a - b;//a''=a'-b'=8-3=5
//	printf("%d %d", a, b);//a=5  b=3
//	
//	system("pause");
//	return 0;
//}

//4.求10 个整数中最大值。

//int main()
//{
//	int arr[] = { -1, -2, -3, -4, -5, -6, -7, -8, 0 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			int tmp = 0;
//			tmp = max;
//			max = arr[i];
//			arr[i] = tmp;
//		}
//	}
//	printf("最大值max=%d\n", max);
//	system("pause");
//	return 0;
//}


//5.将三个数按从大到小输出。

//void Swap(int* px, int* py)
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
//	int c = 0;
//	printf("请输入要从大到小排序的三个数\n");
//	scanf("%d %d %d", &a, &b, &c);
//	if (b > c)
//	{
//		Swap(&b, &c);
//	}
//	if (a > b)
//	{
//		Swap(&b, &a);
//	}
//
//	printf("%d %d %d", c, b, a);
//	system("pause");
//	return 0;
//}

//6.求两个数的最大公约数。
//  辗转相除法

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	printf("请输入两个数\n");
//	scanf("%d %d", &a, &b);
//	while (t = a%b)
//	{
//		a = b;
//		b = t;
//	}
//	printf("两个数的最大公约数是：%d\n", b);
//	system("pause");
//	return 0;
//}

//7.将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//void SwapArr(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//int PrintArr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[1]);
//
//	SwapArr(arr1, arr2, sz);
//	PrintArr(arr1, sz);
//	PrintArr(arr2, sz);
//
//	system("pause");
//	return 0;
//}

//8. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。

//int main()
//{
//	int i = 0;
//	int j = 0;
//	double sum1 = 0.0;
//	double sum2 = 0.0;
//	double sum = 0.0;
//	for (i = 1; i<100; i+=2)
//	{
//		sum1 = sum1 + 1.0 / i;	
//	}
//	printf("%lf ", sum1);
//
//	for (j = 2; j<=100; j+=2)
//	{
//		sum2 = sum2 + 1.0 / j;
//	}
//	printf("%lf ", sum2);
//	sum = sum1 - sum2;
//	printf("%lf ", sum);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*1.0 / i;
//		flag = -flag;
//
//	}
//	printf("%lf\n", sum);
//	system("pause");
//	return 0;
//}