#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//��������Ϸ
//void menu()
//{
//	printf("*************************\n");
//	printf("******   1. play   ******\n");
//	printf("******   0. exit   ******\n");
//	printf("*************************\n");
//}
// void game()
//{
//	 //1.���������
//	int num = 0;
//	int guess = 0;
//	num = rand()% 100 + 1;
//	printf("������\n");
//	//������
//	
//	while (1)
//	{
//		printf("���������µ����֣�1-100��:\n");
//	    scanf("%d", &guess);
//		if (guess < num)
//		{
//			printf("��С��\n");
//		}
//		else if (guess>num)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{		
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳�����\n");
//		    break;
//		default:
//			printf("����������������룡\n");
//			break;
//		}
//
//	} while (input);
//	system("pause");
//	return 0;
//}


//������ƹػ�
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ĵ��Խ���60���ڹػ���������룺��������������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "����������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	system("pause");
//	return 0;
//}


//�ҳ����������е����ֵ

//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("������Ҫ�Ƚϵ���������\n");
//	scanf("%d%d", &a, &b);
//	max = get_max(a, b);
//	printf("max=%d\n", max);
//	system("pause");
//	return 0;
//}

//�����������α���������
void swap(int *px, int* py)
{
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int a = 66;
	int b = 88;
	printf("a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}
