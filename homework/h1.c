#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= i ; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//
//	}
//	printf("\ncount=%d\n",count);
//	system("pause");
//	return 0;	
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n",count);
//	system("pause");
//	return;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d\t",i,j,i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 )
//		{
//			if (i % 100 != 0)
//			{
//				printf("%d ", i);
//				count++;
//			}
//		}
//		if (i % 400 == 0)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\ncount=%d ",count);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int tmp = 0;
//	scanf("%d %d",&a,&b);//输入要交换的两个值
//	tmp = a;
//	a = b;
//	b = tmp;      //建一个临时变量实现交换
//	printf("%d %d",a,b);
//	system("pause");
//	return 0;
//}


////按位异或
//int main()
//{
//	int a = 0;//3
//	  //00000000000000000000000000000011
//	int b = 0;//2
//	  //00000000000000000000000000000010
//      //00000000000000000000000000000001    a异或b=a'
//	  //00000000000000000000000000000011    b异或a'=b'   实现a到b中
//	  //00000000000000000000000000000010    b'异或a'=a'' 实现b到a中
//	scanf("%d %d",&a,&b);
//	a = a^b;
//	b = b^a;
//	a = a^b;
//	printf("%d %d",a,b);
//	system("pause");
//	return 0;
//}


//

//int main()
//{
//	int i = 0;
//	int MAX = 0;               //定义一个MAX最大值
//	int arr[10] = { 0,1,2,3,4,5,65,7,8,9 };      
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] >= MAX)
//		{
//			MAX = arr[i];     //每次比较后，将最大的值附给MAX
//		}
//	}
//	printf("10个整数中最大的数为：%d", MAX);
//	system("pause");
//	return 0;
//}
////
////
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	system("pause");
//	return 0;
//}


int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	int tmp = 0;
	scanf("%d %d", &a, &b);
	if (a > b)
	{
	
	//{
	//	tmp = a;
	//	a = b;
	//	b = tmp;
	//}
	  for (i = b; i > 0; i--)
	  {
		 if (a % i == 0 && b % i == 0)
		 {
			printf("%d", i);
			break;
		 }
	 }
	}
	else
	{
		for (i = a; i > 0; i--)
		{
			if (a % i == 0 && b % i == 0)
			{
				printf("%d", i);
				break;
			}
		}

	}
	system("pause");
	return 0;
}