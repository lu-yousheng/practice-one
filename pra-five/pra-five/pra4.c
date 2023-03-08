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
//void Bubble(int arr[],int sa)
//{
//	int left = 0;
//	int tmp = 0;
//	if (arr < a)
//	{
//		if (arr[left] > arr[left + 1])
//		{
//			tmp = arr[left + 1];
//			arr[left + 1] = arr[left];
//		}
//		Bubble(arr + 1, sa);
//		arr[left + 1] = tmp;
//	}
//	//int* pa = arr;
//	//int* ps = pa + sa;
//	//int tmp = 0;
//	//for (int i = 0;i < sa;i++)
//	//{
//	//	while (pa != ps)
//	//	{
//	//		if (*pa > *(pa + 1))
//	//		{
//	//			tmp = *(pa + 1);
//	//			*(pa + 1) = *pa;
//	//			*pa = tmp;
//	//		}
//	//		pa++;
//	//	}
//	//	pa = arr;
//	//}
//	//int left = 0;
//	//int right = sa;
//	//int i = 0;
//	//for (i = 0;i < sa;i++)
//	//{
//	//	while (left < right)
//	//    {
//	//	if (arr[left] > arr[left + 1])
//	//	{
//	//		int tmp = 0;
//	//		tmp = arr[left];
//	//		arr[left] = arr[left + 1];
//	//		arr[left + 1] = tmp;
//	//	}
//	//	left++;
//	//    }
//	//	left = 0;
//
//	//}
//}
//int main()
//{
//	int arr[] = {4,6,1,7,9,3,5};
//	int str_a = sizeof(arr) / sizeof(arr[0]) - 1;
//	Bubble(arr,str_a);
//	int i = 0;
//	for (i = 0;i <= str_a;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void reverse(int arr[], int sa)
//{
//	int left = 0;
//	int right = sa;
//	int tmp = 0;
//	while(left<right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void init(int arr[],int sa)
//{
//	for (int i = 0;i <= sa;i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sa)
//{
//	for (int i = 0;i <= sa;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int str_a = sizeof(arr) / sizeof(arr[0]) - 1;
//	//reverse(arr,str_a);
//	init(arr, str_a);
//	print(arr, str_a);
//	return 0;
//}
//交换数组，将数组A和数组B的元素进行交换，数组一样大
//void swap(int A[], int B[], int sa)
//{
//	int left = 0;
//	int tmp = 0;
//	while (left != sa)
//	{
//		tmp = A[left];
//		A[left] = B[left];
//		B[left] = tmp;
//		left++;
//	}
//
//}
void print(int arr[], int sa)
{
	for (int i = 0;i <= sa;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//int main()
//{
//	int A[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int B[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sa = sizeof(A) / sizeof(A[0]) - 1;
//	print(A, sa);
//	print(B, sa);
//	printf("交换后\n");
//	swap(A, B,sa);
//	print(A, sa);
//	print(B, sa);
//	return 0;
//}
//void print(char ch[],int sc)
//{
//	int i = 0;
//	for (i = 0;i < sc; i++)
//	{
//		printf("%c ", ch[i]);
//	}
//}
//int my_strlen(char ch[])
//{
//	int count = 0;
//	char* first = ch;
//	while (*first != '\0')
//	{
//		count++;
//		first++;
//	}
//	return count;
//}
//int main()
//{
//	char ch[5] = { '0' };
//	scanf("%s", ch);
//	int sc = my_strlen(ch);
//	print(ch,sc);
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int sa = sizeof(arr) / sizeof(arr[0]) - 1;
//	/*for (int i = 0;i <= sa;i++)
//	{
//		scanf("%d", &arr[i]);
//	}*/
//	print(arr,sa);
//	return 0;
//}
//键盘输入一个长度为len（1 <= len < 30）的字符串
//再输入一个正整数 m（1 <= m <= len）
//将此字符串中从第 m 个字符开始的剩余全部字符复制成为另一个字符串
//并将这个新字符串输出。要求用指针处理字符串。
//int my_strlen(char ch[])
//{
//	int count = 0;
//	char* first = ch;
//	while (*first != '\0')
//	{
//		count++;
//		first++;
//	}
//	return count;
//}
//int main()
//{
//	char str[30] = { '0' };
//	scanf("%s", str);
//	int sl = my_strlen(str);
//	int m = 0;
//	scanf("%d", &m);
//	while (m)
//	{
//		if (m > 30)
//			printf("输入错误，请输入1-30之间的数字\n");
//		else
//			break;
//	}
//	//m = m - 1;
//	char str1[30] = { '0' };
//	/*int i = 0;
//	for (i = 0;i < sl-1;i++)
//	{
//		str1[i] = str[m-1];
//		m++;
//	}*/
//	char* pstr = str;
//	char* pstr1 = str1;
//	while (m != sl)
//	{
//		*pstr1 = *(pstr+m);
//		m++;
//		pstr1++;
//	}
//	printf("%s\n", str);
//	printf("%s\n", str1);
//	return 0;
//}
struct stu
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	struct stu myz = { "莫玉珍",18,"2020075170"};
	scanf("%s", &myz.name);
	scanf("%d", &myz.age);
	scanf("%s", &myz.id);

	printf("%s %d %s", myz.name, myz.age, myz.id);

}