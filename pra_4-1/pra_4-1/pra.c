#define _CRT_SECURE_NO_WARNINGS
//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ����ϵ����ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ����
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
//		printf("û�ҵ���");
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
//		printf("�ҵ��ˣ�");
//		printf("�±���%d %d", x, y);
//	}
//	else
//	{
//		printf("û���ҵ���");
//	}
//	return 0;
//}
//�ַ�������
//ʵ��һ�����������������ַ����е�k���ַ�
//���磺ABCD����һ���ַ���BCDA
// bacd---1
// bcad---2
// bcda---3
//ABCD���������ַ��õ�CDAB
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