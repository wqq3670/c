#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


//11.1 
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�

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
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

 

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

//11.3����Ļ�ϴ�ӡ������ǡ�
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

//12.1��д������
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

//12.1.1   ʹ�ÿ⺯��pow  
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

//12.1.2ȡ��������������Ʋ���  
//unsigned int reverse_bit(unsigned int num)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		sum = sum + ((num >> i) & 1)*(1 << (31 - i));
//                   ȡ����              ���Ʋ���
//	}
//	return sum;
//}

//12.1.3������sum ��ȡ��Ҫת���������һλ��sum���
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
//	scanf("%d", &n);  //����һ����
//	ret=reverse_bit(n);
//	printf("%u\n", ret);     //%u---�޷�������  %d---�з�������
//	system("pause");
//	return 0;
//}

//12.2��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ��

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);//����a,b
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
//		rav = (a&b) + (a^b) / 2;  //  a��b��ͬ������λ����������λ��Ȩ��֮��  +
//								  //  a��b��ͬ������λ����������λ��Ȩ��֮��  /2
//		   //a��λ��b==a��b��ͬλ��һ��
//		   //a��λ���b==a��b��ͬλ֮��
//	printf("%d %d %d", a, b, rav);
//	system("pause");
//	return 0;
//
//}

//12.3���ʵ�֣� һ��������ֻ��һ�����ֳ�����һ�Ρ�
//�����������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩

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

int main()
{
	int arr[7] = { 1, 4, 2, 1, 4, 2, 8 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = 0;
	for (i = 0; i < sz; i++)
	{
		ret = ret^arr[i];

	}
	printf("%d\n", ret);
	system("pause");
	return 0;
}


//12.4��һ���ַ����������Ϊ:"student a am i",
////	���㽫��������ݸ�Ϊ"i am a student".
////	Ҫ��
////	����ʹ�ÿ⺯����
////	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
////
//#include<assert.h>
////���������ַ���
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
//�����ַ�������
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
//	//1.����һ���ַ���
//	assert(str != NULL);
//	int len = my_strlen(str);
//	reverse_str(str,str+len-1);
//	//2.����һ������
//	while (*str != '\0')
//	{
//		char* start = str;
//		while (*str != ' '&&*str != '\0')
//		{
//			str++;
//		}
//		reverse_str(start, str - 1);
//		if (*str == ' ')  //ֻ�ڿո��ʱ������
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

