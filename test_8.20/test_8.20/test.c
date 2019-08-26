#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//1.递归和非递归分别实现求第n个斐波那契数。

//递归
//
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//int main()
//{
//	int ret = 0;
//	int input = 0;
//	printf("请输入要求的第几位斐波那契数列：");
//	scanf("%d", &input);
//	ret = fib(input);
//	printf("%d\n", ret);
//	return 0;
//}

//非递归(从前往后算)

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int ret = 0;
//	int input = 0;
//	printf("请输入要求的第几位斐波那契数列：");
//	scanf("%d", &input);
//	ret = fib(input);
//	printf("%d\n", ret);
//	return 0;
//}

//2.编写一个函数实现n^k，使用递归实现

//double fac(int n, int k)
//{
//	if (k == 0)
//	{
//		return  1;
//	}
//	else if (k >= 1)
//	{
//		return n*fac(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / fac(n, -k);
//	}
//}
//
//int main()
//{
//	double ret = 0;
//	int n = 0;
//	int k = 0;
//	printf("请输入：");
//	scanf("%d %d", &n, &k);
//	ret = fac(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19

//思想：即前面的数看做一个整体 加最后一个和   一点一点剥离

//int DigitSum(int n)
//{
//	if (n <= 9)
//	{
//		return n;
//	}
//	else
//	{
//		while (n)
//		{
//			return n % 10 + DigitSum(n / 10);
//		}
//	}
//}
//
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	printf("请输入：");
//	scanf("%d", &num);
//	ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}


////4. 编写一个函数 reverse_string(char * string)（递归实现） 
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。

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
//
//void Print(char arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse_string(char arr[])
//{
//	int len = my_strlen(arr);
//	char tmp = arr[0];
//	arr[0] = arr[len-1];
//	arr[len-1] = '\0';
//	if (my_strlen(arr+1) >= 2)
//	{
//		Reverse_string(arr+1);
//	}
//	arr[len-1] = tmp;
//}
//
//int main()
//{
//	char arr[20] = "hello";
//	int len = my_strlen(arr);
//	Print(arr,len);
//	Reverse_string(arr);
//	Print(arr,len);
//	return 0;
//}

//非递归
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
//
//void Print(char arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[20] = "hello";
//	int len = my_strlen(arr);
//	Print(arr, len);
//	Reverse_string(arr);
//	Print(arr, len);
//	return 0;
//}

//5.递归和非递归分别实现strlen

//非递归
//#include<assert.h>
//
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello world";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//递归
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
//}
//
//int main()
//{
//	char arr[] = "hello world";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//6.递归和非递归分别实现求n的阶乘 

//非递归

//int fac(int n)
//{
//	int mul = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		mul = mul*i;
//	}
//	return mul;
//}
//
//int main()
//{
//	int ret = 0;
//	int num = 0;
//	printf("请输入：");
//	scanf("%d", &num);
//	ret = fac(num);
//	printf("%d\n", ret);
//	return 0;
//}

//递归

//int fac(int n)
//{
//	if (1 == n)
//	{
//		return 1;
//	}
//	else if (0 == n)
//	{
//		return 0;
//	}
//	else
//	{
//		return n*fac(n - 1);
//	}
//}
//
//int main()
//{
//	int ret = 0;
//	int num = 0;
//	printf("请输入：");
//	scanf("%d", &num);
//	ret = fac(num);
//	printf("%d\n", ret);
//	return 0;
//}

//7.递归方式实现打印一个整数的每一位 

void Print(int n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int num = 0;
	printf("请输入：");
	scanf("%d", &num);
	Print(num);
	return 0;
}