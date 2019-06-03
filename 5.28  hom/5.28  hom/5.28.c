#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


//11.1 
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1;  b<= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if(a*b*c*d*e == 120)
//							printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//
//						}
//						   
//					}
//
//				}
//
//			}
//
//		}
//
//	}
//	system("pause");
//	return 0;
//}


//11.2
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

 

//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd';killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//11.3在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1


//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i==j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//12.1编写函数：
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

//12.1.1   使用库函数pow  
//#include<math.h>
//unsigned int reverse_bit(unsigned int num)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		sum=sum+((num >> i) & 1)*pow(2, 31 - i);
//
//	}
//	return sum;
//}

//unsigned int reverse_bit(unsigned int num)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		sum = sum + ((num >> i) & 1)*(1 << (31 - i));
//
//	}
//	return sum;
//}
//

//12.1.2取下这个数进行左移操作  
//unsigned int reverse_bit(unsigned int num)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		sum = sum + ((num >> i) & 1)*(1 << (31 - i));
//                   取下数              左移操作
//	}
//	return sum;
//}

//12.1.3先左移sum 再取下要转换的数最后一位与sum异或
//unsigned int reverse_bit(unsigned int num)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		sum = sum << 1;
//		sum = sum | ((num >> i) & 1);
//
//	}
//	return sum;
//}
//
//
//
//int  main()
//{
//	int n = 0;
//	unsigned int ret = 0;
//	scanf("%d", &n);  //输入一个数
//	ret=reverse_bit(n);
//	printf("%u\n", ret);     //%u---无符号整形  %d---有符号整形
//	system("pause");
//	return 0;
//}

//12.2不使用（a+b）/2这种方式，求两个数的平均值。

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);//输入a,b
//	int rav = 0;
//	rav = (a + (b - a)) / 2;
//	//rav = (b + (a - b)) / 2;
//	printf("%d %d %d", a, b, rav);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//		int rav = 0;
//		rav = (a&b) + (a^b) / 2;  //  a与b相同二进制位乘以他所在位的权重之和  +
//								  //  a与b不同二进制位乘以他所在位的权重之和  /2
//		   //a按位与b==a和b相同位的一半
//		   //a按位异或b==a和b不同位之和
//	printf("%d %d %d", a, b, rav);
//	system("pause");
//	return 0;
//
//}

//12.3编程实现： 一组数据中只有一个数字出现了一次。
//其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）

//int main()
//{
//	int arr[7] = { 1, 2, 3, 5, 1, 2, 3 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz;j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			break;
//		}
//	}
//	printf("%d\n", arr[i]);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[7] = { 1, 4, 2, 1, 4, 2, 8 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];
//
//	}
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//12.4有一个字符数组的内容为:"student a am i",
////	请你将数组的内容改为"i am a student".
////	要求：
////	不能使用库函数。
////	只能开辟有限个空间（空间个数和字符串的长度无关）。
////
//#include<assert.h>
////逆序整个字符串
//void reverse_str(char* left, char* right)
//{
//	char tmp = 0;
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//计算字符串长度
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse(char* str)
//{
//	//1.逆序一个字符串
//	assert(str != NULL);
//	int len = my_strlen(str);
//	reverse_str(str,str+len-1);
//	//2.逆序一个单词
//	while (*str != '\0')
//	{
//		char* start = str;
//		while (*str != ' '&&*str != '\0')
//		{
//			str++;
//		}
//		reverse_str(start, str - 1);
//		if (*str == ' ')  //只在空格的时候跳过
//		{
//			str++;
//		}
//	}
//}
//int main()
//{
//	char arr[] = "student a am i";
//	reverse(arr);
//	printf("%s\n",arr);
//	system("pause");
//	return 0;
//}

//百钱百鸡问题    公鸡五钱一个   母鸡三钱一个   小鸡三个一钱   一百钱买100只
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i <  21; i++)
	{
		for (j = 0; j < 34; j++)
		{
			for (k = 0; k < 101; k++)
			{
				if (5 * i + 3 * j + 1 * k / 3 == 100)
				{
					printf("%d %d %d", i,j,k);
					printf("\n");
				}
			}
		}
	}



	system("pause");
	return 0;
}
