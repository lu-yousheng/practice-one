#define _CRT_SECURE_NO_WARNINGS 1.
//#include<stdio.h>
//void print(unsigned n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//#include<stdio.h>
//int my_strlen(char* a)
//{
//	if (*a != 0)
//	{
//		return 1 + my_strlen(++a);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = { "abc" };
//	printf("%d", my_strlen(arr));
//	return 0;
//}
//#include<stdio.h>
//int Fac(int k)
//{
//	if (k == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return k * Fac(k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//
//#include<stdio.h>
//int count = 0;
//int Fib(int n)
//{
	//if (n > 3)
	//	count++;
	//if (n <= 2)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return Fib(n - 1) + Fib(n - 2);
	//}
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("×Ü¹²£º%d", count);
//	return 0;
//}
#include<stdio.h>
int main()
{
	float i = 0;
	float sum = 0;
	for (i =1;i <= 100;i++)
	{
		sum += 1 / i;
	}
	printf("%lf", sum);
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0;i <= 3;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("%d",arr);
//	return 0;
//}