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
//	if (*a != '\0')
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
//	printf("总共：%d", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	int flag = 1;
//	for (i =1;i <= 100;i++)
//	{
//		//if (i % 2 == 0)
//		//	sum -= 1.0 / i;
//		//else
//		//	sum += 1.0 / i;
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}
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
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 99,2,3,4,5,6,7,8,9,10 };
//	int max = 0;
//	int i = 0;
//	int sa = sizeof(arr)/sizeof(arr[0]);
//	for (i = 0;i <= sa - 1;i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			if (arr[i] > max)
//				max = arr[i];
//		}
//			else
//			{
//				if (arr[i] > max)
//					max = arr[i + 1];
//			}
//	}
//	printf("%d", max);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,20,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 1;
//	for (i = 1;i <= 10;i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		int j = 1;
//		//for (j = i;j <= 9;j++)
//		//{
//		//	int ret = i * j;
//		//	printf("%d×%d=%d ", i, j, ret);
//		//}
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d×%d=%-2d ", j, i, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如输入9，输入9*9口诀表，输出12，输出12*12的乘法口诀表。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		int j = 0;
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d×%d=%-3d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//void print(int a)
//{
//	if (a > 9)
//	{
//
//		printf("%d", a % 100);
//	}
//	else
//}
//int main()
//{
//	int  a = 0;
//	scanf("%d", &a);
//	printf("%d ", print(a));
//	return 0;
//}
//编写一个函数reverse_string(char* string)递归实现
//将参数字符串中的字符反向排列，不是逆序打印
//不能使用c函数库中的字符串操作函数
//用迭代实现
#include<stdio.h>
//void reverse_string(char* string)
//{
//	int left = 0;
//	int right = strlen(string) - 1;
//	int tmp = 0;
//	if (left != right)
//	{
//		reverse_string(string++);
//	}
//	tmp = string[left];
//	string[left] = string[right];
//	string[right] = tmp;
//}
//int main()
//{
//	char arr[100] = { "" };
//	scanf("%s",arr);
//	
//	reverse_string(arr);
//	/*while (left != right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}*/
//	printf("%s", arr);
//	return 0;
//}
//用函数实现
//int my_strlen(char* strl)
//{
//	int count = 0;
//	while(*strl != '\0')
//	{
//		count++;
//		strl++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str+1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//
//	//int left = 0;
//	//int right = my_strlen(str)-1;
//	//char tmp = 0;
//	//while (left < right)
//	//{
//	//	tmp = str[left];
//	//	str[left] = str[right];
//	//	str[right] = tmp;
//	//	left++;
//	//	right--;
//	//}
//}
//int main()
//{
//	char arr[] = "abcdef";
//    reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}
//int DigitSum(int x)
//{
//	int sum = 0;
//	if (x > 9)
//	{	
//		while (x>9)
//		{
//			sum += (x%10);
//			x = x/10;
//		}
//		return sum+x;
//	}
//	else
//		return x;
//}
//int DigitSum(int x)
//{
//	if (x > 9)
//	{
//		return x % 10 + DigitSum(x / 10);
//	}
//	else
//		return x;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", DigitSum(n));
//	return 0;
//}
//int power(int x,int y)
//{
//	int i = 0;
//	int pw = 1;
//	for (i = 1;i <= y;i++)
//	{
//		pw *= x;
//	}
//	return pw;
//}
//int power(int x, int y)
//{
//	if (y > 1)
//	{
//		return x * power(x, y - 1);
//	}
//	else
//		return x;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n,&k);
//	printf("%d", power(n,k));
//	return 0;
//}
//递归完成斐波那契数列
