#define _CRT_SECURE_NO_WARNINGS 1
//求一个整数存储在内存中二进制1的个数
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = 1;
//	int i = 0;
//	int count = 0;
//	for (int i = 0;i < 32;i++)
//	{
//		if ((a & b) == 1)
//		{
//			count++;
//		}
//		a = a >> 1;
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	char b = 0xb600;
//	if(a == 0xb6)
//	printf("a");
//	return 0;
//}
//实现对一个数组的冒泡排序
void Bubble(int arr[], int sa)
{
	int* pa = arr;
	int* ps = pa + sa;
	int tmp = 0;
	for (int i = 0;i < sa;i++)
	{
		while (pa != ps)
		{
			if (*pa > *(pa + 1))
			{
				tmp = *(pa + 1);
				*(pa + 1) = *pa;
				*pa = tmp;
			}
			pa++;
		}
		pa = arr;
	}
	//int left = 0;
	//int right = sa;
	//int i = 0;
	//for (i = 0;i < sa;i++)
	//{
	//	while (left < right)
	//    {
	//	if (arr[left] > arr[left + 1])
	//	{
	//		int tmp = 0;
	//		tmp = arr[left];
	//		arr[left] = arr[left + 1];
	//		arr[left + 1] = tmp;
	//	}
	//	left++;
	//    }
	//	left = 0;

	//}
}
int main()
{
	int arr[] = {4,6,1,7,9,3,5};
	int str_a = sizeof(arr) / sizeof(arr[0]) - 1;
	Bubble(arr,str_a);
	int i = 0;
	for (i = 0;i <= str_a;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}