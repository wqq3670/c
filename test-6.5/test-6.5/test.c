#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//Ä£ÄâÊµÏÖstrlen

int my_strlen(const char*str)
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
	char arr[] = "abcdefg";
	int len = 0;
	len=my_strlen(arr);
	printf("%d ", len);
	system("pause");
	return 0;
}