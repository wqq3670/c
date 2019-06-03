#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}


int main()
{
	char arr1[] = "abshjdhsaf";
	int len = my_strlen(arr1);
	printf("%d\n", len);
	system("pause");
	return 0;
}

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
// int main() 
// { 
//	char arr1[] = "abcdef"; 
// 	int len = my_strlen(arr1); 
//	printf("%d\n", len); 
// 
//	system("pause"); 
//	return 0; 
//} 
