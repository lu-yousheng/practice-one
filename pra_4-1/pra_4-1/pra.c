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
//#include<stdio.h>
//#include<string.h>
//void coso_arr(char* arr, int k)
//{
//	char* fit = arr;
//	char tmp = 0;
//	int sz = strlen(arr);
//	if (k > 1)
//	{
//		while (fit <= (arr + (sz / k)))
//		{
//			tmp = *fit;
//			*fit = *(fit + k);
//			*(fit + k) = tmp;
//			fit++;
//		}
//	}
//	else
//	{
//		while (fit < (arr+sz-1))
//		{
//			tmp = *fit;
//			*fit = *(fit + k);
//			*(fit + k) = tmp;
//			fit++;
//		}
//
//	}
//
//}
//int main(void)
//{
//	char arr[20] = "ABCD";
//	scanf("%s", arr);
//	int input = 1;
//	scanf("%d", &input);
//	coso_arr(arr, input);
//	printf("%s", arr);
//	return 0;
//}
//左旋字符
//#include<stdio.h>
//void revolve(char* arr, int k)
//{
//	int sl = strlen(arr);
//	char tmp = 0;
//	int i = 0;
//
//	//字符放置到后面的次数
//	for (i = 0;i < k;i++)
//	{
//		int j = 0;
//		tmp = arr[0];
//		for (j = 0;j <sl-1 ;j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[j] = tmp;
//	}
//}
//int main(void)
//{
//	char arr[20] = "ABCD";
//	int input = 1;
//	scanf("%s", arr);
//	scanf("%d", &input);
//
//	revolve(arr, input);
//	printf("%s",arr);
//	return 0;
//}
//三步旋转法
//AB CDEF
//BA FEDC
//CDEF BA
//abcd-adcb-bcda
//#include<stdio.h>
//void revolve(char* fit, char* lat)
//{
//	char tmp = 0;
//	while (fit<lat)
//	{
//		tmp = *fit;
//		*fit = *lat;
//		*lat = tmp;
//		fit++;
//		lat--;
//	}
//}
//int main(void)
//{
//	char arr[20] = "ABCDE";
//	int input = 2;
//	int sl = strlen(arr);
//	scanf("%s", arr);
//	scanf("%d", &input);
//	revolve(arr, arr + input-1);
//	revolve(arr + input, arr + sl - 1);
//	revolve(arr, arr + sl - 1);
//	printf("%s", arr);
//	return 0;
//}
//写一个函数，判断这个字符串是否为另一个字符串的逆置，
//例如，给定一个s1=AABCD和s2=BCDAA返回1；
//给定s1=abcd和s2=ACBD，返回0；
#include<stdio.h>
void revolve(char* arr, int k)
{
	int sl = strlen(arr);
	char tmp = 0;
	int i = 0;

	//字符放置到后面的次数
	for (i = 0;i < k;i++)
	{
		int j = 0;
		tmp = arr[0];
		for (j = 0;j < sl - 1;j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[j] = tmp;
	}
}

int judge_rel(char* arr, char* arr1)
{//AABCD BCDAA
	int count = 0;
	char* fit = arr;
	char* fit1 = arr1;
	int sl = strlen(arr);
	int sl1 = strlen(arr1);

	if (sl != sl1)
	{
		return 0;
	}
	while (sl)
	{
		if (*arr==*arr1)
		{
			count++;
			arr++;
			arr1++;
		}
		else
		{
			arr++;
		}
		sl--;
	}
	int rel = sl1 - count;
	revolve(fit, rel);
	if (strcmp(fit, fit1) == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}
int main()
{
	char arr[20] = "AABCD";
	char arr1[20] = "BCDAA";//da abc
	scanf("%s", arr);
	scanf("%s", arr1);
	int ret = judge_rel(arr, arr1);
	if (ret == 1)
	{
		printf("是");
	}
	else
		printf("不是");
	return 0;
}