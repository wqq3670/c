#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

////1. 
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}
//int count_one_bits(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (1 == (n&1))
//		{
//			count++;
//		}
//		n = n >> 1;
//	}
//	return count;
//}
//int main()
//{
//	unsigned int input = 0;
//	int ret = 0;
//	printf("请输入一个值：");
//	scanf("%d", &input);
//
//	ret = count_one_bits(input);
//	printf("%d\n", ret);
//	return 0;
//}

//2.获取一个数二进制序列中所有的偶数位和奇数位， 
//分别输出二进制序列。

//void Print(int arr[])
//{
//	int i = 0;
//	for (i = 15; i >= 0;i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////获取奇数位
//void Odd_Digit(int arr1[], int n)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = n;
//	for (i = 1; i < 32; i += 2)
//	{
//			arr1[j] = ((n >> i) & 1);
//			j++;
//	}
//	
//}
////获取偶数位
//void Couple_Digit(int arr2[], int x)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = x;
//	for (i = 0; i < 32; i += 2)
//	{
//			arr2[j] = ((x >> i) & 1);
//			j++;
//	}
//}
//
//int main()
//{
//	int input = 0;
//	int arr1[16] = { 0 };
//	int arr2[16] = { 0 };
//	printf("请输入一个数：");
//	scanf("%d", &input);
//	printf("奇数位:");
//	Odd_Digit(arr1,input);
//	Print(arr1);
//	printf("偶数位:");
//	Couple_Digit(arr2, input);
//	Print(arr2);
//	return 0;
//}

//3. 输出一个整数的每一位。

//void Print(int num)
//{
//	int i = 0;
//	int ret = 0;
//	while (num)
//	{
//		ret = num % 10;
//		printf("%d ", ret);
//		num = num / 10;
//	}
//}
//
//int main()
//{
//	int num = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	Print(num);
//	return 0;
//}

//4.编程实现： 
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

//int Different(int x, int y)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == (((x >> i) & 1) ^ ((y >> i) & 1)))    //注意右移后要拿出最后一位，然后两两间再进行比较
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int ret = 0;
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入要比较的两个数：");
//	scanf("%d %d", &num1, &num2);
//	ret = Different(num1, num2);
//	printf("不同的bit位有：%d\n", ret);
//	return 0;
//}



