#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
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
//	while (left < right)//ѭ������ ��������
//	{
//		//1�ν���
//		//����߿�ʼ��ż��
//		//��Ϊż������ѭ�����ұ���������λ��
//		while ((left < right) && (arr[left] % 2 != 0))
//		{
//			left++;
//		}
//		//���ұ߿�ʼ������
//		//��Ϊ��������ѭ������һ������ҵ���ż������λ��
//
//		while ((left < right)&&(arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)//�ж��Ƿ���Ҫ����
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
////���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
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
//����һ

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
//			printf("�ҵ���,������ %d %d\n", x, y);
//			return;
//		}
//	}
//printf("�Ҳ���\n");
//}


//������

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
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ������� %d %d\n", ret.x, ret.y);
//	}
//	
//	system("pause");
//	return 0;
//}

//������


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
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ������� %d %d\n", row, col);
	}

	system("pause");
	return 0;
}