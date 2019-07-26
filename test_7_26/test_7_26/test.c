#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//猜数字游戏
//void menu()
//{
//	printf("*************************\n");
//	printf("******   1. play   ******\n");
//	printf("******   0. exit   ******\n");
//	printf("*************************\n");
//}
// void game()
//{
//	 //1.生成随机数
//	int num = 0;
//	int guess = 0;
//	num = rand()% 100 + 1;
//	printf("猜数字\n");
//	//猜数字
//	
//	while (1)
//	{
//		printf("请输入所猜的数字（1-100）:\n");
//	    scanf("%d", &guess);
//		if (guess < num)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess>num)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对啦\n");
//			break;
//		}
//	}
//}
//
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
//			printf("退出程序\n");
//		    break;
//		default:
//			printf("输入错误，请重新输入！\n");
//			break;
//		}
//
//	} while (input);
//	system("pause");
//	return 0;
//}


//代码控制关机
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("你的电脑将在60秒内关机，如果输入：韩宝健是猪，将会取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "韩宝健是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	system("pause");
//	return 0;
//}


//找出两个整数中的最大值

//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("请输入要比较的两个数：\n");
//	scanf("%d%d", &a, &b);
//	max = get_max(a, b);
//	printf("max=%d\n", max);
//	system("pause");
//	return 0;
//}

//交换两个整形变量的内容
void swap(int *px, int* py)
{
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int a = 66;
	int b = 88;
	printf("a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}
