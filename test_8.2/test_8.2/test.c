#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>


//ð������

//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int i = 0;
//	int j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ð�����������
//
//	for (i = 0; i < sz-1; i++)
//	{
//		//ÿ��ð��������н���������
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if(arr[j]>arr[j+1])
//          {
//	            int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//}
//		    }
//	    }
//	//��ӡ����õ�����
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//������ð������Ľ����Ż����������������Ĳ���9��8��7��6��5��4��3��2��1��0��
//����0��1��2��3��4��5��6��7��8��9���������򣬻���һ������������Ĵ����Ч��̫���ˣ�
//������Ƕ�������Ż���

//int main()
//{
//	int arr[] = {0,1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	int j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ð�����������
//
//	for (i = 0; i < sz-1; i++)
//	{
//		int flag = 1;//��Ϊ1����������
//		//ÿ��ð��������н���������
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//����Ϊ0�������������򣬼�Ϊ����
                         //����������������Ҫ����һ�Σ�
//			}
//
//		}
//		if (flag == 1)
//			{
//				break;
//			}
//	}
//	//��ӡ����õ�����
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//��װ�ɺ�����ð������

//void Bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			return;
//		}
//    }
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//	
//int main() 
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��ӡ
//	print_arr(arr, sz);
//	//����
//	Bubble_sort(arr, sz);
//	//��ӡ
//	print_arr(arr, sz);
//
//	system("pause");
//	return 0;
//}


