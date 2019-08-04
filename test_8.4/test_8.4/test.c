#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//1.完成猜数字游戏。
//void menu()
//{
//	printf("**************************\n");
//	printf("*****     1. play   ******\n");
//	printf("*****     0. exit   ******\n");
//	printf("**************************\n");
//}
//
//
//void game()
//{
//	int x = 0;
//	int guess = 0;
//	x = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请输入你所猜的数字（1-100）：");
//		scanf("%d", &guess);
//		printf("\n");
//		if (guess > x)
//		{
//			printf("猜大了\n");
//			printf("\n");
//		}
//		else if (guess < x)
//		{
//			printf("猜小了\n");
//			printf("\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了，这个数字是：%d\n", guess);
//			printf("\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default :
//			printf("输入错误，请重新输入！\n");
//			break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}

//2.写代码可以在整型有序数组中查找想要的数字， 
//找到了返回下标，找不到返回 - 1.（折半查找）

//int Binary_Search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = 0;
//		mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
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
//
//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
//	int k = 17;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	ret = Binary_Search(arr, k, sz);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}

////3.编写代码模拟三次密码输入的场景。 
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：\n");
//		scanf("%s", password);
//		if (strcmp(password, "19940412") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误，请重新输入：\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次输入错误，退出程序\n");
//	}
//	system("pause");
//	return 0;
//}
//

//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。


//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'a'&&ch <= 'z')
//		{
//			putchar(ch - 32);
//		}
//		else if (ch >= 'A'&&ch <= 'Z')
//		{
//			putchar(ch + 32);
//		}
//		else if (ch >= '0'&&ch <= '9')
//		{
//			;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	system("pause");
//	return 0;
//}


//4.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定， 
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。

//void Mul(int x)
//{
//	int i = 1;
//	for (i = 1; i <= x; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//
//}
//
//int main()
//{
//	int input = 0;
//	printf("请输入：");
//	scanf("%d", &input);
//	Mul(input);
//	system("pause");
//	return 0;
//}

//5.使用函数实现两个数的交换。
//void swap(int* px, int* py)
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
//	printf("请输入要交换的两个数：\n");
//	scanf("%d%d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}

//6.实现一个函数判断year是不是润年。

//void Is_Runyear(int x)
//{
//	if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
//	{
//		printf("是润年\n");
//	}
//	else
//	{
//		printf("不是润年\n");
//	}
//}
//int main()
//{
//	int year = 0;
//	printf("请输入要判断的年份：");
//	scanf("%d", &year);
//	Is_Runyear(year);
//	system("pause");
//	return 0;
//}

//7.创建一个数组，
//实现函数init（）初始化数组、1-10
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。


//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Empty(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Reverse(int arr[], int sz)
//{
//	int i = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr,sz);//初始化
//	Print(arr, sz);
//
//	Reverse(arr, sz);//倒置
//	Print(arr, sz);
//
//	Empty(arr, sz);//清空
//	Print(arr, sz);
//	system("pause");
//	return 0;
//}

