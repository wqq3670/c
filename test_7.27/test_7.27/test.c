#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//用函数找出100-200之间的素数
//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x%j == 0)
//			return 0;
//	}
//	return 1;
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}


//int is_runyear(int n)
//{
//	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//
//}

//int is_runyear(int n)
//{
//	return (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0));
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_runyear(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	system("pause");
//	return 0;
//}

//运用函数实现 一个有序的整形数组的二分查找（折半查找）
//  对之前所写的代码进行优化，可以任意指定 left  right 的大小，提高了速率

//int search(int arr[], int k, int left, int right)
//{
//	
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
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
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 1;
//	int ret = 0;
//	int sz = (sizeof(arr) / sizeof(arr[0]));
//	int left = 0;
//	int right = sz - 1;
//
//	ret=search(arr, k, left, right);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到啦，下标是：%d\n", ret);
//	}
//
//	system("pause");
//	return 0;
//}


//写一个函数，这个函数每调用一次，num增加1
//void Add(int* num)
//{
//	(*num)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	system("pause");
//	return 0;
//}



//接受一个无符号整形，按顺序打印他的每一位，1234   1 2 3 4

//void print(int k)
//{
//	if (k > 9)
//	{
//		print(k / 10);
//	}
//	printf("%d ", k % 10);
//}
//int main()
//{
//	unsigned int num = 1314;
//	print(num);
//	system("pause");
//	return 0;
//}



//模拟实现strlen(函数方式)
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("this is gun");
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}


//模拟实现strlen(递归方式)
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//
//}
//int main()
//{
//
//	int len = 0;
//	len = my_strlen("this is gun");
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}

//求n的阶乘（递归）
//int fac(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		//运用递归方式
//		return n*fac(n - 1);
//	}
//
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	printf("请输入一个数\n");
//	scanf("%d", &input);
//	ret = fac(input);
//	printf("%d\n", ret);
//
//	system("pause");
//	return 0;
//}

//求n的阶乘（循环）
//int fac(int k)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <=k ; i++)
//	{
//		ret = ret*i;
//	}
//	return ret;
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	printf("请输入一个数\n");
//	scanf("%d", &input);
//	ret = fac(input);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//求斐波那契数列（递归）

int fib(int k)
{
	if (k <= 2)
	{
		return 1;
	}
	else
	{
		return fib(k - 1) + fib(k - 2);
	}
}
int main()
{
	int input = 0;
	int ret = 0;
	printf("请输入一个数\n");
	scanf("%d", &input);
	ret = fib(input);
	printf("%d\n", ret);
	system("pause");
	return 0;
}


