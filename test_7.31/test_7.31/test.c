#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>


//1. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
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

//2.����Ļ���������ͼ���� 
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
//	printf("������������\n");
//	scanf("%d", &line);
//	//��ӡ�ϰ벿��
//
//	for (i = 0; i < line; i++)
//	{
//		//��ӡÿ��
//		int j = 0;
//		//1.��ӡÿ���еĿո�
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
//	//��ӡ�°벿��
//
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//��ӡÿһ��
//		//��ӡÿһ���еĿո�
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;


///3.���0��999֮������С�ˮ�ɻ������������ 
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������

/*
�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
153 = 1^3 + 5^3 + 3^3��
370 = 3^3 + 7^3 + 0^3��
371 = 3^3 + 7^3 + 1^3��
407 = 4^3 + 0^3 + 7^3��
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
//		//��λ��
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//		tmp = n;
//		//���
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		//�ж��Ƿ�Ϊˮ�ɻ���
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

//4.��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣� 
//���磺2 + 22 + 222 + 2222 + 22222

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

