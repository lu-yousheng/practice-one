#define _CRT_SECURE_NO_WARNINGS
//模拟实现strcat，strcmp，strcpy
#include<stdio.h>
#include<string.h>
char* my_strcat(char* arr1, const char* arr2)
{
	char* arr = arr1;
	while (*arr1 != '\0')
	{
		arr1++;
	}
	while (*arr2 != '\0')
	{
		*arr1 = *arr2;
		arr1++;
		arr2++;
	}
	return arr;
}
int my_strcmp(const char* arr1, const char* arr2)
{
	while (*arr1!= '\0' && *arr2!='\0')
	{
		if (*arr1 == *arr2)
		{
			arr1++;
			arr2++;
		}
		else
			return *arr1 - *arr2;
	}
	return *arr1 - *arr2;
}
int main(void)
{
	char arr[20] = "hello";
	char* str = "hallo";
	//my_strcat(arr, str);
	//strcat(arr, str);
	if (my_strcmp(arr, str) > 1)
		printf("arr>str");
	else if (my_strcmp(arr, str) < 0)
		printf("arr<str");
	else
		printf("相等");
	return 0;
}