#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

////1.��д������ 
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832

#include<math.h>

//unsigned int Reverse_bit(unsigned int num)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		//sum += ((num >> i) & 1)*(1<<(32 - i - 1));
//		sum += ((num >> i) & 1)*(pow(2, (31 - i)));
//	}
//	return sum;
//}
//
//int main()
//{
//	unsigned int value = 0;
//	unsigned int ret = 0;
//	printf("�����룺");
//	scanf("%d", &value);
//	ret = Reverse_bit(value);
//	printf("%u\n", ret);
//	return 0;
//}

//unsigned int Reverse_bit(unsigned int num)
//{
//	int i = 0;
//	unsigned int ret = 0;
//	for (i = 0; i < 32; i++)
//	{
//		ret = ret | ((num >> i) & 1);
//		if (i < 31)
//		{
//			ret = ret << 1;//��Ϊ��ȡ�µ�һλ��λ����0�󣬽�0ֻ��Ҫ����31�Σ������ж�һ��
//		}
//	}
//	return ret;
//}

//unsigned int Reverse_bit(unsigned int num)
//{
//	int i = 0;
//	unsigned int ret = 0;
//	for (i = 0; i < 32; i++)
//	{
//		ret = ret << 1;//�˴��������ǰ������һ�ΰ�λ���൱���˷���һ�Σ����Ժ���ֻ��ret�ϻ���31��
//		ret = ret | ((num >> i) & 1);
//	}
//	return ret;
//}
//
//int main()
//{
//	unsigned int value = 0;
//	unsigned int ret = 0;
//	printf("�����룺");
//	scanf("%d", &value);
//	ret = Reverse_bit(value);
//	printf("%u\n", ret);
//	return 0;
//}

//2.��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ��

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int avg = 0;
//	printf("��������������");
//	scanf("%d %d", &a, &b);
//	avg = a + (b - a) / 2;
//avg = a + ((b - a) >> 1);
//	printf("��������ƽ����Ϊ��%d\n", avg);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int avg = 0;
//	printf("��������������");
//	scanf("%d %d", &a, &b);
//	avg = ((a^b) / 2) + (a&b);
//	//����ͬλ�͵�һ�룬�Ͳ�ͬλ�ͼ�һ���
//	printf("��������ƽ����Ϊ��%d\n", avg);
//	return 0;
//}

////3.���ʵ�֣� 
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 8, 4, 3, 2, 1 };
//	int i = 0;
//	int ret = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("��������ֻ������һ�ε�����Ϊ��%d\n", ret);
//	return 0;
//}

//4.
//��һ���ַ����������Ϊ:"student a am i",
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
	}
	return count;
}

void Reserve(char* arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		char tmp = 0;
		tmp = arr[i];
		arr[i] = arr[sz-1];
		arr[sz-1] = tmp;
	}
}


int main()
{
	char arr[] = "student a am i";
	int len = my_strlen(arr);
	printf("%s\n", arr);
	printf("%d", len);
	Reserve(arr,len);
	printf("%s\n", arr);
	return 0;
}