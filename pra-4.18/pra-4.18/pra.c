#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define print(X,Z) "the number " #X " is "#Z"\n",X
////#define PRINTF 
//int main()
//{
//#if 1
//	int a = 10;
//	printf(print(a,%d));
//#endif
//	int b = 15;
//	printf(print(b, %d));
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<string.h>
////0-9----48-57
//int my_atoi(const char* pc)
//{
//
//	char* jge = pc;
//	int count = 0;
//	int ret = 0;
//	int sl = strlen(pc);
//	while (sl--)
//	{
//		if (47 < *jge && 58 > *jge || *jge == 45)
//		{
//			jge++;
//			count++;
//		}
//	}
//	if (*pc == 45)
//	{
//		pc++;
//		count--;
//		while (pc != jge)
//		{
//			int dig = (*pc - 48) * (pow(10, count - 1));
//			ret += dig;
//			pc++;
//			count--;
//		}
//		return 0 - ret;
//	}
//	else
//	{
//		while (pc != jge)
//		{
//			int dig = (*pc - 48) * (pow(10, count - 1));
//			ret += dig;
//			pc++;
//			count--;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char* sa="  -2aa";
//	int ret = atoi(sa);
//	//int ret = my_atoi(sa);
//	printf("%d", ret);
//	return 0;
//}
//一个数组中只有两个数字只出现一次其他所有数字都出现了两次
//用函数找出这两个只出现一次的数字。
#include<stdio.h>
void find_sigle(int* pa,int sa )
{
	int i = 0;
	for (i = 0;i < sa;i++)
	{
		int once = pa[i];
		int j = 0;
		for (j = 0;j < sa;j++)
		{
			if (once == pa[j] && (i != j))
				printf("%d ", pa[j]);
		}
	}

}
int main()
{
	int arr[] = { 1,2,4,3,1,2,3,5,5 };
	int sa = sizeof(arr) / sizeof(arr[0]);
	find_sigle(arr,sa);
	return 0;
}