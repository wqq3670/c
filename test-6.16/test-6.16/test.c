#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//结构体的自引用
//描述链表中的一个节点

//struct Node
//{
//	int data;
//	struct Node*next;
//
//};
//typedef struct  Node
//{
//	int  data;
//    struct Node* next;
//
//}Node;
//
//
//
//int main()
//{
//	struct Node a = { 3, NULL };
//	struct Node b = { 5, &a };
//	printf("%d\n", b.data);
//	printf("%p\n", b.next);
//	system("pause");
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//
//};
//
//int main()
//{
//	struct Point p2 = { 1, 2 };
//	printf("%d %d\n", p2.x, p2.y);
//	system("pause");
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//};
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//
//};
//
//int main()
//{
//	struct Node n1 = { 5, { 1, 2 }, NULL };
//	struct Node n2 = { 8, { 3, 4 }, &n1 };
//	printf("%d\n", n2.next->data);
//	printf("%d %d\n", n2.next->p.x, n2.next->p.y);
//	printf("%p\n", n2.next);
//
//	system("pause");
//	return 0;
//}


//struct s1
//{
//	char c1;
//	int a;
//	char c2;
//
//};

//struct s2
//{
//	char q1;
//	char q2;
//	int i;
//
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct s1));
//	printf("%d\n", sizeof(struct s2));
//	system("pause");
//	return 0;
//}
//
//struct  s3
//{
//	double a;
//	char b;
//	int c;
//};
//
//struct s4
//{
//	char d;
//	struct s3 e;
//	double f;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct s3));
//	printf("%d\n", sizeof(struct s4));
//	system("pause");
//	return 0;
//}

//#pragma pack(1)//设置默认对齐数为6
//struct s5
//{
//	char a1;
//	int i1;
//	char a2;
//
//};
//#pragma pack()
//int main()
//{
//	printf("%d\n", sizeof(struct s5));
//	system("pause");
//	return 0;
//}
//结构体传参传址（地址）
//struct s6
//{
//	char arr[5000];
//	int i;
//
//};
//void Print(struct s6*ps)
//{
//	printf("%s %d\n", ps->arr, ps->i);
//}
//int main()
//{
//	struct s6 s = { "hello world", 60 };
//	Print(&s);
//	system("pause");
//	return 0;
//}

