#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//void binary(int x,char* ch)
//{
//	//将十进制除以2得到逆序的二进制数
//	while (x)
//	{
//		if (x % 2 == 0)
//		{
//			*ch = '0';
//		}
//		else
//		{
//			*ch = '1';
//		}
//		x /= 2;
//		ch++;
//	}
//	*ch = '\0';
//    //将逆置的二进制逆置成正确的二进制数
//	char tmp = 0;
//	int left = 0;
//	int right = strlen(ch) - 1;
//	while (left <= right)
//	{
//		tmp = ch[left];
//		ch[left] = ch[right];
//		ch[right] = tmp;
//		left++;
//		right--;
//	}
//	
//}
////计算二进制中1的个数
//int Count_1(char* ch)
//{
//	int count = 0;
//	while (*ch != '\0')
//	{
//		if (*ch == '1')
//		{
//			count++;
//		}
//		ch++;
//	}
//	return count;
//}
////补全32位的二进制
//void perfect_32b(char* original,char* complete)
//{
//	int first = 32 - strlen(original);
//	while (*original != '\0')
//	{
//		*(complete + first) = *(original);
//		complete++;
//		original++;
//	}
//
//}
////初始化数组
//void InitArr(char* chech_32b)
//{
//	//int finish = strlen(chech_32b) - 1;
//	int i = 0;
//	for ( i = 0;i < 32;i++)
//	{
//		chech_32b[i] = '0';
//	}
//	chech_32b[32] = '\0';
//}
//int main()
//{
//	char chech[20] = { 0 };
//	char chech_32b[35] = { '0'};
//	//初始化数组chech_32b的元素，使其变为都为0的32位的数组
//	InitArr(chech_32b);
//	int count = 0;
//	scanf("%d", &count);
//	
//	//将随机整数转化成二进制存入数组chech中
//	binary(count, chech);
//	
//	//补全32位的二进制，将二进制放入chech_32b的全0数组中
//	perfect_32b(chech, chech_32b);
//	printf("%s\n", chech);
//	printf("%s\n", chech_32b);
//	
//	//打印出二进制中1的个数
//	//printf("%d", Count_1(chech));
//
//	return 0;
//}


//用操作符写出一个数的二进制1的个数
//用操作符写出一个数二进制的偶位数和奇数
//用操作符写出两个数二进制不相同位的个数
//用操作符写出两个数交换，不能创建变量
//求两个数的最小公倍数√

//求两个数的最小公倍数
#include<stdio.h>
//int mini_cm(int x, int y)
//{
//	int mult = 1;
//	int tmp = 0;
//	if (x > y)
//	{
//		while (mult<=y)
//		{
//			tmp = x * mult;
//			if (tmp % y == 0)
//			{
//				return tmp;
//			}
//			mult++;
//		}
//	}
//	else
//	{
//		while (mult <= x)
//		{
//			tmp = y * mult;
//			if (tmp % x == 0)
//			{
//				return tmp;
//			}
//			mult++;
//		}
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", mini_cm(a, b));
//}

//将句子进行逆置，如 i like you 变成 you like i
int examine(char* orig)
{
	int count = 0;
	while (*orig != '\0')
	{
		if (*orig == ' ')
		{
			count++;
		}
		orig++;
	}
	return count;
}
void Inversion(char* original,char* piracy)
{
	int start = 0;
	int i = 0;
	int tmp = 0;
	while (examine(original))
	{
		int len = strlen(original);
		for (i = 0;i < len;i++)
		{
			if (*(original + i) == ' ')
				start = i + 1;
		}
		int tmp = start-1;
		while (*(original + start))
		{
			*piracy = *(original + start);
			piracy++;
			start++;
		}
		*piracy = ' ';
		piracy++;
		*(original + tmp) = '\0';
		
	}
	if(examine(original) == 0)
	{
		while (*original != '\0')
		{
			*piracy = *original;
			original++;
			piracy++;
		}
	}

}
int main()
{
	char sent_or[100] = { 0 };
	gets(sent_or);
	char sent_pi[100] = { 0 };
	Inversion(sent_or, sent_pi);
	printf("%s", sent_pi);
	return 0;
}