#define _CRT_SECURE_NO_WARNINGS
//*   *
// * * 
//  *
// * *
//*   *

//}
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	while (scanf("%d", &line) != EOF)
//	{
//		int i = 0;
//		for (i = 0;i < line;i++)
//		{
//			int j = 0;
//			for (j = 0; j < line;j++)
//			{
//				if (j == i || j == (line - i - 1))
//				{
//					printf("*");
//				}
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//
//	int i = 0;
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
void print(int* arr, int a)
{
	int i = 0;
	for (i = 0;i < a;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void bubble_sort(int* arr, int a)
{
	int i = 0;
	int tmp = 0;
	for (i = 0;i < a;i++)
	{
		int j = 0;
		for (j = 0;j <a-i-1 ;j++)
		{
			if (*(arr + j) > *(arr + j + 1))
			{
				tmp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = tmp;
			}
		}
	}
}
//void input_arr(int* arr, int* a, int x)
//{
//	int i = 0;
//	for (i = 0;i < *a;i++)
//	{
//		if (*(arr + i) > x)
//		{
//			*(arr+*a+1)=*(arr+*a)
//		}
//	}
//}
int main()
{
	int acm = 0;
	int* arr = NULL;
	scanf("%d", &acm);
	arr = (int*)malloc(sizeof(acm) * acm);
	int i = 0;
	for (i = 0;i < acm;i++)
	{
		scanf("%d", arr+i);
	}
	print(arr, acm);
	bubble_sort(arr, acm);
	print(arr, acm);
	int input = 0;
	while (scanf("%d", &input) != EOF)
	{
		int* pa = (int*)realloc(arr, sizeof(acm) * acm + sizeof(input));
		if (pa != NULL)
		{
			arr = pa;
		}
		else
			printf("不能开辟空间");
		//input_arr(arr, &acm,input);
		*(arr + acm) = input;
		acm++;
		bubble_sort(arr, acm);
		print(arr, acm);
	}
	free(arr);
	arr = NULL;
	return 0;
}