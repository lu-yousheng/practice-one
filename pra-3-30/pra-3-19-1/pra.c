#define _CRT_SECURE_NO_WARNINGS

//先来自己做一个冒泡排序
//#include<stdio.h>
//void bobble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int tmp = 0;
//
//	//这是一趟的排序
//	for (i = 0;i < sz;i++)
//	{
//		//接下来是每两个相交换的趟数，也就是一趟里面交换的次数
//		int j = 0;
//		for (j = 0;j < sz-i-1;j++)
//	    //这里减1是防止arr数组越界访问到数组后面未知的元素，因为i开始时为0，
//		//意味着要进行10次交换，但我们10个元素仅需要9次交换即可，因此这里我们需要减1
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]) ;
//	bobble_sort(arr, sz);
//	print(arr, sz);
//}
//学习使用qsort函数

#include<stdio.h>
#include<stdlib.h>
//数组的打印函数
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
}

//qsort函数中的比较函数
//int *cmp(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp);
//	print(arr, sizeof(arr) / sizeof(arr[0]));
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int *cmp_age(void* e1, void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//void test2()
//{
//	struct stu arr[] = { {"zhangsan",29},{"lisi",25},{"wangwu",27} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_age);
//}
//int main(void)
//{
//	//test1();
//	test2();
//	return 0;
//}
//自己模拟实现qsort函数
#include<stdio.h>
struct stu
{
	char name[20];
	int age;
};

////e1和e2的比较，返回值大于1可以判断e1大于e2
//int cmp_bub(void* e1, void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
int* cmp_bub(void* e1, void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

//将地址fit与地址lat指向的内容交换
void swap(char* fit,char* lat,int size)
{
	int i = 0;
	char tmp = 0;
	for (i = 0;i < size;i++)
	{
		tmp = *fit;
		*fit = *lat;
		*lat = tmp;
		fit++;
		lat++;
	}
}
// int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
void bubble_qort(void* arr, int sz, int size, int (*cmp_bub)(const void* e1, const void* e2))
{
	int i = 0;
	//一趟的排序
	for (i = 0;i < sz;i++)
	{
		//一趟里面的交换
		int j = 0;
		for (j = 0;j < sz - 1 - i;j++)
		{

			//将未知类型强制转换为char*类型加上类型大小可得到一个元素的字节大小，就可以访问该元素的内容
			if(cmp_bub(((char*)arr + (size * j)), ((char*)arr + size * (j + 1)))>0)
			{ 
				//将数组的第一个元素，第二个元素和元素大小传进去实现交换
				swap(((char*)arr + (size * j)), ((char*)arr + size * (j + 1)), size);//交换
			}
		}

	}
}
//void test1()
//{
//	int arr[] = { 6,7,8,9,1,2,3,4,5,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_qort(arr, sz, sizeof(arr[0]), cmp_bub);
//	print(arr, sz);
//}
void test2()
{
	struct stu arr[] = { {"zhangsan",29},{"lisi",25},{"wangwu",27} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_qort(arr, sz, sizeof(arr[0]), cmp_bub);
}

int main()
{
	//test1();
	test2();
	return 0;
}