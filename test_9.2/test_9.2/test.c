#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 2;
	int num = 19;

	for (i = 2; i <= num; i++)
	{

		if (num % i == 0)
		{

			printf("不是素数");
			break;

		}
		if (i == num)
		{

			printf("是素数");
		}
	}

	return 0;
}


//int fun(char* str)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	char line[80] = { 0 };
//	int num = 0;
//	printf("Enter a string:\n");
//	gets(line);
//	num = fun(line);
//	printf("%d\n", num);
//	return 0;
//}


//int main()
//{
//	int s[12] = { 1, 2, 3, 4, 4, 3, 2, 1, 1, 1, 2, 3 };
//	int c[5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 12; i++)
//		c[s[i]]++;
//	for (i = 1; i < 5; i++)
//		printf("%d", c[i]);
//	printf("\n");
//	return 0;
//}

//int fun(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		if (*str != ' ' && (*(str + 1) == ' ' || *(str + 1) == '\0'))
//		{
//			count++;
//		}
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "one world one dream abd dhs dk";
//	int num = 0;
//	num = fun(arr);
//	printf("%d\n", num);
//	return 0;
//}

//int fun(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		if (*str == ' ')
//		{
//			count++;
//		}
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "one world one dream abd dhs dk";
//	int num = 0;
//	num = fun(arr);
//	printf("%d\n", num);
//	return 0;
//}
