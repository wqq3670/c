#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//1.递归和非递归分别实现求第n个斐波那契数。

//递归
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//
//}
//int main()
//{
//	int ret = 0;
//	int input = 0;
//	printf("请输入要求的斐波那契数：");
//	scanf("%d", &input);
//	ret = fib(input);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//非递归

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
//	printf("请输入要求的斐波那契数：");
//	scanf("%d", &input);
//	ret = fib(input);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//2.编写一个函数实现n^k，使用递归实现

//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if(k > 0)
//	{
//		return n*Pow(n, k-1);
//	}
//	else
//	{
//		return 1.0 / (Pow(n, -k));
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	double ret = 0;
//	printf("请输入：");
//	scanf("%d%d", &n, &k);
//	ret = Pow(n, k);
//	printf("%lf\n", ret);
//	system("pause");
//	return 0;
//}


//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19

//int DigitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	else
//	{
//		return (n % 10) + DigitSum(n / 10);
//	}
//	 
//}
//int main()
//{
//	int ret = 0;
//	int input = 0;
//	
//	printf("请输入：");
//	scanf("%d", &input);
//	ret = DigitSum(input);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//4. 编写一个函数 reverse_string(char * string)（递归实现） 
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
//void Reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	char arr[] = "hello sehun";
//	printf("%s\n", arr);
//	Reverse_string(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}

//递归

//void Reverse_string(char* str)
//{
//	char tmp = str[0];
//	int len = strlen(str);
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';
//	if (strlen(str+1) >= 2)
//	{
//		Reverse_string(str + 1);
//	}
//	str[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	Reverse_string(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}

//void Reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = strlen(str);
//	*str = *(str+len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str + 1) >= 2)
//	{
//		Reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	Reverse_string(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}




//5.递归和非递归分别实现strlen 

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
//int main()
//{
//	int ret = 0;
//	char arr[] = "hello world";
//	ret = my_strlen(arr);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//递归
//int my_strlen(char* str)
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
//int main()
//{
//	int ret = 0;
//	char arr[] = "hello world";
//	ret = my_strlen(arr);
//	printf("%d\n", ret);
//	system("pause");
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
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	printf("请输入：");
//	scanf("%d", &n);
//	ret = fac(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//递归

//int fac(int n)
//{
//	if (1 == n)
//	{
//		return n;
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
//	int n = 0;
//	printf("请输入：");
//	scanf("%d", &n);
//	ret = fac(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//7.递归方式实现打印一个整数的每一位
//
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int input = 0;
//	printf("请输入：");
//	scanf("%d", &input);
//	Print(input);
//	system("pause");
//	return 0;
//}

