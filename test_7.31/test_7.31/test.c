#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>


//1. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
//int main()
//{
//	int i = 0;
//	//int j = 0;
//	int count1 = 0;
//	int count2 = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count1++;
//		}
//	}
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			count2++;
//		}
//	}
//	sum = count1 + count2;
//	printf("sum=%d\n", sum);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//	}
//		printf("count=%d\n", count);
//		system("pause");
//		return 0;
//}

//2.在屏幕上输出以下图案： 
//      *             1
//     ***            3   
//    *****           5
//   *******          7
//  *********         9
// ***********       11
//*************      13
// ***********       11
//  *********         9
//   *******          7
//    *****           5
//     ***            3
//      *             1

//int main()
//{
//	int i = 0;
//	int line = 0;
//	printf("请输入行数：\n");
//	scanf("%d", &line);
//	//打印上半部分
//
//	for (i = 0; i < line; i++)
//	{
//		//打印每行
//		int j = 0;
//		//1.打印每行中的空格
//		for (j = 0; j <line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//打印下半部分
//
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//打印每一行
//		//打印每一行中的空格
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;


///3.求出0～999之间的所有“水仙花数”并输出。 
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。

/*
在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
153 = 1^3 + 5^3 + 3^3。
370 = 3^3 + 7^3 + 0^3。
371 = 3^3 + 7^3 + 1^3。
407 = 4^3 + 0^3 + 7^3。
*/


//#include<math.h>
//
//int main()
//{
//	int n = 0;
//	for (n = 1; n <= 1000000; n++)
//	{
//		
//		int count = 1;
//	    double sum = 0.0;
//	    int tmp = n;
//		//算位数
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//		tmp = n;
//		//求和
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		//判断是否为水仙花数
//		if (n == sum)
//		{
//			printf("%d ", n);
//		}
//		
//	}
//    system("pause");
//	return 0;
//
//}

//4.求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字， 
//例如：2 + 22 + 222 + 2222 + 22222

int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int sum = 0;
	int ret = 0;
	scanf("%d %d", &a, &n);
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum = sum + ret;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}

