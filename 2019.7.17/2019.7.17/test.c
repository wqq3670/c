#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 }, *q[4], k;
//	for (k = 0; k < 4; k++)
//	{
//		q[k] = &a[k * 3];
//	}
//	printf("%d\n", q[3][1]);
//	system("pause");
//	return  0;
//
//}

//�������ָ�����͵Ĵ�С
//int main()
//{
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(short *));
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(double*));
//
//
//	system("pause");
//	return 0;
//}

//�ж��Ƿ�Ϊһ������
//int main()
//{
//	int input = 0;
//	printf("������һ����\n");
//	scanf("%d", &input);
//	if (1 == input % 2)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	system("pause");
//	return 0;
//}



//��1-100֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (1 == i % 2)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("count=%d\n", count);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		printf("%d ", i);
//		count++;
//	}
//	printf("count=%d\n", count);
//	system("pause");
//	return 0;
//}


//��n�Ľ׳�
//int main()
//{
//	int n = 0;
//	printf("����n\n");
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//1!+2!+...+10!
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret = ret*j;
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = ret*i;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	system("pause");
//	return 0;
//}

//���ֲ���  �۰����(��������)

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 5;
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0])) - 1;
//	
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û��Ҫ�ҵ���\n");
//	}
//	system("pause");
//	return 0;
//}
//���ú�����ʽ
//int binary_search(int arr[], int k, int sz)
//{ 
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		
//		int mid = left + (right - left) / 2;
//
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}	
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k =17;
//	int sz = (sizeof(arr) / sizeof(arr[1]));
//	int ret = binary_search(arr, k, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}
#include<windows.h>
//int main()
//{
//	char arr1[] = "hello everyone, this is gun";
//	char arr2[] = "                           ";
//	int left = 0;
//	int right = (sizeof(arr1) / sizeof(arr1[0])) - 2;
//	//int right=strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	system("pause");
//	return 0;
//}

int main()
{
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("���������룺\n");
		scanf("%s", password);
		if (strcmp(password, "19940412") == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("����������������룺\n");
		}
	}
		if (i == 3)
		{
			printf("������������˳�����\n");
		}
	system("pause");
	return 0;
}
