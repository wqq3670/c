#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>


//冒泡排序

//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int i = 0;
//	int j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//冒泡排序的趟数
//
//	for (i = 0; i < sz-1; i++)
//	{
//		//每趟冒泡排序进行交换，排序
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
//	//打印排序好的数组
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//对上面冒泡排序的进行优化，倘若我们遇到的不是9，8，7，6，5，4，3，2，1，0；
//而是0，1，2，3，4，5，6，7，8，9；这样有序，或者一部分有序，上面的代码就效率太低了；
//因此我们对其进行优化。

//int main()
//{
//	int arr[] = {0,1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	int j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//冒泡排序的趟数
//
//	for (i = 0; i < sz-1; i++)
//	{
//		int flag = 1;//其为1，假设有序
//		//每趟冒泡排序进行交换，排序
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//若变为0；即进行了排序，即为无序，
                         //但是无论有序无序都要进来一次；
//			}
//
//		}
//		if (flag == 1)
//			{
//				break;
//			}
//	}
//	//打印排序好的数组
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//分装成函数的冒泡排序

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
//	//打印
//	print_arr(arr, sz);
//	//排序
//	Bubble_sort(arr, sz);
//	//打印
//	print_arr(arr, sz);
//
//	system("pause");
//	return 0;
//}


