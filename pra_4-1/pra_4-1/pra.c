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
//�����ַ�
//#include<stdio.h>
//void revolve(char* arr, int k)
//{
//	int sl = strlen(arr);
//	char tmp = 0;
//	int i = 0;
//
//	//�ַ����õ�����Ĵ���
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
//������ת��
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
//дһ���������ж�����ַ����Ƿ�Ϊ��һ���ַ��������ã�
//���磬����һ��s1=AABCD��s2=BCDAA����1��
//����s1=abcd��s2=ACBD������0��
#include<stdio.h>
void revolve(char* arr, int k)
{
	int sl = strlen(arr);
	char tmp = 0;
	int i = 0;

	//�ַ����õ�����Ĵ���
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
		printf("��");
	}
	else
		printf("����");
	return 0;
}