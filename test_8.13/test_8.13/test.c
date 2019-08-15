#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//1.在屏幕上输出以下图案： 
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *

//int main()
//{
//	int line = 0;
//	int i = 0;
//	printf("请输入行数：\n");
//	scanf("%d", &line);
//	
//	//打印上半部分
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			//打印空格
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)
//		{
//			//打印*
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line-1; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j < i + 1; j++)
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
//
//	return 0;
//}

//2.求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
//
///*
//在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
//例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
//153 = 1^3 + 5^3 + 3^3。
//370 = 3^3 + 7^3 + 0^3。
//371 = 3^3 + 7^3 + 1^3。
//407 = 4^3 + 0^3 + 7^3。
//*/

#include<math.h>

int main()
{
	int i = 0;

	for (i = 0; i <= 999; i++)
	{
		int tmp = i;
		int count = 1;
		
		//算位数
		while (tmp / 10)
		{
			count++;
			tmp = tmp / 10;
		}

		tmp = i;//必须把tmp还原为初始值i

		//求和
	    double sum = 0;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}

		if (i == sum)
		{
			printf("%lf\n", sum);
		}
	}
	return 0;
}

//3. 求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	printf("请输入：");
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
