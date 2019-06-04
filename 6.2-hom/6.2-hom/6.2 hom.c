#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//		
//	}
//	printf("\n");
//}
//
//void EvenNumberMove(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//
//	while (left < right)//循环起来 整个交换
//	{
//		//1次交换
//		//从左边开始找偶数
//		//若为偶数跳出循环与右边奇数交换位置
//		while ((left < right) && (arr[left] % 2 != 0))
//		{
//			left++;
//		}
//		//从右边开始找奇数
//		//若为奇数跳出循环与上一步左边找到的偶数交换位置
//
//		while ((left < right)&&(arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)//判断是否需要交换
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//
//int main()
//{
//	//int arr[10] = { 1, 2, 6, 4, 5, 3, 7, 8, 9, 0 };
//	int arr[] = { 1, 3, 5, 7, 9, 11 };
//	//int arr[] = { 2, 4, 6, 8, 10, 0 };
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	EvenNumberMove(arr, sz);
//	print(arr, sz);
//
//	system("pause");
//	return 0;
//}
//

//2.
////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
//方法一

//FindNumber(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x < row&& y >=0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y]>k)
//		{
//			y--;
//		}
//		else
//		{
//			printf("找到了,坐标是 %d %d\n", x, y);
//			return;
//		}
//	}
//printf("找不到\n");
//}


//方法二

//struct Point
//{
//	int x ;
//	int y ;
//
//};
//struct Point FindNumber(int arr[3][3], int k, int row, int col)
//{
//	struct Point ret = { -1, -1 };
//	int x = 0;
//	int y = col - 1;
//	while (x < row&& y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y]>k)
//		{
//			y--;
//		}
//		else
//		{
//			ret.x = x;
//			ret.y = y;
//			return ret;
//		}
//	}
//	return ret;
//}



//int main()
//{
//
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	struct Point ret = {0};
//	ret=FindNumber(arr,4,3,3);
//	if (ret.x == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，坐标是 %d %d\n", ret.x, ret.y);
//	}
//	
//	system("pause");
//	return 0;
//}

//方法三


void FindNumber(int arr[3][3], int k,int* prow,int* pcol)
{
	int x = 0;
	int y = *pcol - 1;
	while (x < *prow, y >= 0)
	{
		if (arr[x][y] < k)
		{
			x++;
		}
		else if (arr[x][y]>k)
		{
			y--;
		}
		else
		{
			*prow = x;
			*pcol = y;
			return;
		}
	}

	*prow = -1;
	*pcol = -1;

}

int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int row = 3;
	int col = 3;
	FindNumber(arr, 4, &row, &col);
	if (row == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，坐标是 %d %d\n", row, col);
	}

	system("pause");
	return 0;
}