#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������

//�ݹ�
//
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//int main()
//{
//	int ret = 0;
//	int input = 0;
//	printf("������Ҫ��ĵڼ�λ쳲��������У�");
//	scanf("%d", &input);
//	ret = fib(input);
//	printf("%d\n", ret);
//	return 0;
//}

//�ǵݹ�(��ǰ������)

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
//	printf("������Ҫ��ĵڼ�λ쳲��������У�");
//	scanf("%d", &input);
//	ret = fib(input);
//	printf("%d\n", ret);
//	return 0;
//}

//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��

//double fac(int n, int k)
//{
//	if (k == 0)
//	{
//		return  1;
//	}
//	else if (k >= 1)
//	{
//		return n*fac(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / fac(n, -k);
//	}
//}
//
//int main()
//{
//	double ret = 0;
//	int n = 0;
//	int k = 0;
//	printf("�����룺");
//	scanf("%d %d", &n, &k);
//	ret = fac(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� 
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19

//˼�룺��ǰ���������һ������ �����һ����   һ��һ�����

//int DigitSum(int n)
//{
//	if (n <= 9)
//	{
//		return n;
//	}
//	else
//	{
//		while (n)
//		{
//			return n % 10 + DigitSum(n / 10);
//		}
//	}
//}
//
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	printf("�����룺");
//	scanf("%d", &num);
//	ret = DigitSum(num);
//	printf("%d\n", ret);
//	return 0;
//}


////4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
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
//void Print(char arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse_string(char arr[])
//{
//	int len = my_strlen(arr);
//	char tmp = arr[0];
//	arr[0] = arr[len-1];
//	arr[len-1] = '\0';
//	if (my_strlen(arr+1) >= 2)
//	{
//		Reverse_string(arr+1);
//	}
//	arr[len-1] = tmp;
//}
//
//int main()
//{
//	char arr[20] = "hello";
//	int len = my_strlen(arr);
//	Print(arr,len);
//	Reverse_string(arr);
//	Print(arr,len);
//	return 0;
//}

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
//void Print(char arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[20] = "hello";
//	int len = my_strlen(arr);
//	Print(arr, len);
//	Reverse_string(arr);
//	Print(arr, len);
//	return 0;
//}

//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen

//�ǵݹ�
//#include<assert.h>
//
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
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
//	char arr[] = "hello world";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//�ݹ�
//int my_strlen(const char* str)
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
//
//int main()
//{
//	char arr[] = "hello world";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
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
//
//int main()
//{
//	int ret = 0;
//	int num = 0;
//	printf("�����룺");
//	scanf("%d", &num);
//	ret = fac(num);
//	printf("%d\n", ret);
//	return 0;
//}

//�ݹ�

//int fac(int n)
//{
//	if (1 == n)
//	{
//		return 1;
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
//	int num = 0;
//	printf("�����룺");
//	scanf("%d", &num);
//	ret = fac(num);
//	printf("%d\n", ret);
//	return 0;
//}

//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 

void Print(int n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int num = 0;
	printf("�����룺");
	scanf("%d", &num);
	Print(num);
	return 0;
}