#define _CRT_SECURE_NO_WARNINGS
//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在
//#include<stdio.h>
//int main()
//{
//	int arr[6][6] = { 0 };
//	int i = 0;
//	for (i = 0;i < 6;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 6;j++)
//		{
//			arr[i][j] = j + 1+i;
//			printf("%-2d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	int input = 0;
//	scanf("%d", &input);
//	int* pa = &arr[0][0];
//	while (pa<(&arr+1))
//	{
//		if (*pa == input)
//		{
//			printf("%d", *pa);
//			break;
//		}
//		pa++;
//	}
//	if (pa == (&arr + 1))
//	{
//		printf("没找到！");
//	}
//	return 0;
//}
//1 2 3
//4 5 6 
//7 8 9
//#include<stdio.h>
//int find_key(int* arr[][3], int* row, int* col, int k)
//{
//	int x = 0;
//	int y = *col - 1;
//	while (x < row && y>=0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*row = x;
//			*col = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = find_key(arr, &x, &y, k);
//	if (ret == 1)
//	{
//		printf("找到了！");
//		printf("下标是%d %d", x, y);
//	}
//	else
//	{
//		printf("没有找到！");
//	}
//	return 0;
//}
//字符串回旋
//实现一个函数，可以左旋字符串中的k个字符
//例如：ABCD左旋一个字符得BCDA
// bacd---1
// bcad---2
// bcda---3
//ABCD左旋两个字符得到CDAB
//cdab
//#include<stdio.h>
//void coso_arr(char* arr,int k)
//{
//	char tmp[] = { 0 };
//	char* pt = tmp;
//	int sz = strlen(arr);
//	char* con = arr;
//	while (k)
//	{
//		*pt = *con;
//		pt++;
//		con++;
//		k--;
//	}
//	char* fit = arr+;
//	while (k!=sz)
//	{
//		*(arr+k) = *fit;
//		fit++;
//		k++;
//	}
//
	//char* fit = arr;
	//char tmp = 0;
	//int sz = strlen(arr);
	//while (fit < arr + (sz/k)-1)
	//{
	//	tmp = *fit;
	//	*fit = *(fit + k);
	//	*(fit + k) = tmp;
	//	fit++;
	//}
//
//}
//int main(void)
//{
//	char arr[] = "ABCDEF";//cdabef->cdefab
//	int input = 2;
//	scanf("%d", &input);
//	coso_arr(arr,input);
//	printf("%s", arr);//bcda
//	return 0;
//}
#include<stdio.h>
#include<string.h>
void coso_arr(char* arr, int k)
{
	char* fit = arr;
	char tmp = 0;
	int sz = strlen(arr);
	if (k > 1)
	{
		while (fit <= (arr + (sz / k)))
		{
			tmp = *fit;
			*fit = *(fit + k);
			*(fit + k) = tmp;
			fit++;
		}
	}
	else
	{
		while (fit < (arr+sz-1))
		{
			tmp = *fit;
			*fit = *(fit + k);
			*(fit + k) = tmp;
			fit++;
		}

	}

}
int main(void)
{
	char arr[20] = "ABCD";
	scanf("%s", arr);
	int input = 1;
	scanf("%d", &input);
	coso_arr(arr, input);
	printf("%s", arr);
	return 0;
}