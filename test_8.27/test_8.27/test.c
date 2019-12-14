#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

////1.编写函数： 
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832

#include<math.h>

//unsigned int Reverse_bit(unsigned int num)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		//sum += ((num >> i) & 1)*(1<<(32 - i - 1));
//		sum += ((num >> i) & 1)*(pow(2, (31 - i)));
//	}
//	return sum;
//}
//
//int main()
//{
//	unsigned int value = 0;
//	unsigned int ret = 0;
//	printf("请输入：");
//	scanf("%d", &value);
//	ret = Reverse_bit(value);
//	printf("%u\n", ret);
//	return 0;
//}

//unsigned int Reverse_bit(unsigned int num)
//{
//	int i = 0;
//	unsigned int ret = 0;
//	for (i = 0; i < 32; i++)
//	{
//		ret = ret | ((num >> i) & 1);
//		if (i < 31)
//		{
//			ret = ret << 1;//因为将取下的一位按位或上0后，将0只需要左移31次，所以判断一下
//		}
//	}
//	return ret;
//}

//unsigned int Reverse_bit(unsigned int num)
//{
//	int i = 0;
//	unsigned int ret = 0;
//	for (i = 0; i < 32; i++)
//	{
//		ret = ret << 1;//此处巧妙地在前面利用一次按位或，相当于浪费了一次，所以后面只往ret上或了31次
//		ret = ret | ((num >> i) & 1);
//	}
//	return ret;
//}
//
//int main()
//{
//	unsigned int value = 0;
//	unsigned int ret = 0;
//	printf("请输入：");
//	scanf("%d", &value);
//	ret = Reverse_bit(value);
//	printf("%u\n", ret);
//	return 0;
//}

//2.不使用（a+b）/2这种方式，求两个数的平均值。

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int avg = 0;
//	printf("请输入两个数：");
//	scanf("%d %d", &a, &b);
//	avg = a + (b - a) / 2;
//avg = a + ((b - a) >> 1);
//	printf("两个数的平均数为：%d\n", avg);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int avg = 0;
//	printf("请输入两个数：");
//	scanf("%d %d", &a, &b);
//	avg = ((a^b) / 2) + (a&b);
//	//把相同位和的一半，和不同位和加一起的
//	printf("两个数的平均数为：%d\n", avg);
//	return 0;
//}

////3.编程实现： 
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 8, 4, 3, 2, 1 };
//	int i = 0;
//	int ret = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("这组数中只出现了一次的数字为：%d\n", ret);
//	return 0;
//}

//4.
//有一个字符数组的内容为:"student a am i",
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）。

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
	}
	return count;
}

void Reserve(char* arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		char tmp = 0;
		tmp = arr[i];
		arr[i] = arr[sz-1];
		arr[sz-1] = tmp;
	}
}


int main()
{
	char arr[] = "student a am i";
	int len = my_strlen(arr);
	printf("%s\n", arr);
	printf("%d", len);
	Reserve(arr,len);
	printf("%s\n", arr);
	return 0;
}