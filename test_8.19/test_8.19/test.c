#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

////1. 
//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ�� 
//}
//int count_one_bits(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (1 == (n&1))
//		{
//			count++;
//		}
//		n = n >> 1;
//	}
//	return count;
//}
//int main()
//{
//	unsigned int input = 0;
//	int ret = 0;
//	printf("������һ��ֵ��");
//	scanf("%d", &input);
//
//	ret = count_one_bits(input);
//	printf("%d\n", ret);
//	return 0;
//}

//2.��ȡһ�������������������е�ż��λ������λ�� 
//�ֱ�������������С�

//void Print(int arr[])
//{
//	int i = 0;
//	for (i = 15; i >= 0;i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////��ȡ����λ
//void Odd_Digit(int arr1[], int n)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = n;
//	for (i = 1; i < 32; i += 2)
//	{
//			arr1[j] = ((n >> i) & 1);
//			j++;
//	}
//	
//}
////��ȡż��λ
//void Couple_Digit(int arr2[], int x)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = x;
//	for (i = 0; i < 32; i += 2)
//	{
//			arr2[j] = ((x >> i) & 1);
//			j++;
//	}
//}
//
//int main()
//{
//	int input = 0;
//	int arr1[16] = { 0 };
//	int arr2[16] = { 0 };
//	printf("������һ������");
//	scanf("%d", &input);
//	printf("����λ:");
//	Odd_Digit(arr1,input);
//	Print(arr1);
//	printf("ż��λ:");
//	Couple_Digit(arr2, input);
//	Print(arr2);
//	return 0;
//}

//3. ���һ��������ÿһλ��

//void Print(int num)
//{
//	int i = 0;
//	int ret = 0;
//	while (num)
//	{
//		ret = num % 10;
//		printf("%d ", ret);
//		num = num / 10;
//	}
//}
//
//int main()
//{
//	int num = 0;
//	printf("������һ��������");
//	scanf("%d", &num);
//	Print(num);
//	return 0;
//}

//4.���ʵ�֣� 
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7

//int Different(int x, int y)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == (((x >> i) & 1) ^ ((y >> i) & 1)))    //ע�����ƺ�Ҫ�ó����һλ��Ȼ���������ٽ��бȽ�
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int ret = 0;
//	int num1 = 0;
//	int num2 = 0;
//	printf("������Ҫ�Ƚϵ���������");
//	scanf("%d %d", &num1, &num2);
//	ret = Different(num1, num2);
//	printf("��ͬ��bitλ�У�%d\n", ret);
//	return 0;
//}



