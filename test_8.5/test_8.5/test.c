#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������

//�ݹ�
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//
//}
//int main()
//{
//	int ret = 0;
//	int input = 0;
//	printf("������Ҫ���쳲���������");
//	scanf("%d", &input);
//	ret = fib(input);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//�ǵݹ�

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int ret = 0;
//	int input = 0;
//	printf("������Ҫ���쳲���������");
//	scanf("%d", &input);
//	ret = fib(input);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��

//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if(k > 0)
//	{
//		return n*Pow(n, k-1);
//	}
//	else
//	{
//		return 1.0 / (Pow(n, -k));
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	double ret = 0;
//	printf("�����룺");
//	scanf("%d%d", &n, &k);
//	ret = Pow(n, k);
//	printf("%lf\n", ret);
//	system("pause");
//	return 0;
//}


//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19

//int DigitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	else
//	{
//		return (n % 10) + DigitSum(n / 10);
//	}
//	 
//}
//int main()
//{
//	int ret = 0;
//	int input = 0;
//	
//	printf("�����룺");
//	scanf("%d", &input);
//	ret = DigitSum(input);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void Reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	char arr[] = "hello sehun";
//	printf("%s\n", arr);
//	Reverse_string(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}

//�ݹ�

//void Reverse_string(char* str)
//{
//	char tmp = str[0];
//	int len = strlen(str);
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';
//	if (strlen(str+1) >= 2)
//	{
//		Reverse_string(str + 1);
//	}
//	str[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	Reverse_string(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}

//void Reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = strlen(str);
//	*str = *(str+len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str + 1) >= 2)
//	{
//		Reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	Reverse_string(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}




//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen 

//�ǵݹ�
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	int ret = 0;
//	char arr[] = "hello world";
//	ret = my_strlen(arr);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//�ݹ�
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//int main()
//{
//	int ret = 0;
//	char arr[] = "hello world";
//	ret = my_strlen(arr);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�

//�ǵݹ�
//int fac(int n)
//{
//	int mul = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		mul = mul*i;
//	}
//	return mul;
//}
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	printf("�����룺");
//	scanf("%d", &n);
//	ret = fac(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//�ݹ�

//int fac(int n)
//{
//	if (1 == n)
//	{
//		return n;
//	}
//	else if (0 == n)
//	{
//		return 0;
//	}
//	else
//	{
//		return n*fac(n - 1);
//	}
//}
//
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	printf("�����룺");
//	scanf("%d", &n);
//	ret = fac(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int input = 0;
//	printf("�����룺");
//	scanf("%d", &input);
//	Print(input);
//	system("pause");
//	return 0;
//}

