#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int judge(int x, int y)
//{
//	int judge = 0;
//	if (x > y)
//	{
//		int i = 0;
//		for (i = 1;i <= y;i++)
//		{
//			if (x % i == 0 && (y / i != y )&& y % i == 0)
//			{
//				judge++;
//			}
//		}
//	}
//	else
//	{
//		int i = 0;
//		for (i = 1;i <= x;i++)
//		{
//			if (y % i == 0 &&( y/i !=y )&& x % i ==0)
//			{
//				judge++;
//			}
//		}
//		
//	}
//	if (judge > 0)
//	{
//		return 0;
//	}
//	return 1;
//}
//
//int main(void)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= 2020;i++)
//	{
//		int j = 0;
//		for (j = 1;j <= 2020;j++)
//		{
//			if (judge(i, j))
//			{
//				count++;
//				//printf("%d/%d  ", i, j);
//			}
//		}
//		
//	}
//	printf("%d", count);
//	return 0;
//}
//int gcd(int a, int b) 
//{
//    return b ? gcd(b, a % b) : a;
//}
//
//int main()
//{
//    int res = 0;
//    for (int i = 1; i <= 10; i++)
//        for (int j = 1; j <= 10; j++)
//            if (gcd(i, j) == 1)
//            {
//                res++;
//                printf("%d/%d ", i, j);
//            }
//
//   printf("%d",res);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	printf("hello world");//printf  	//scanf  输入
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n;i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}
//}
//模拟实现strcat，strcmp，strcpy
#include<stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;
	int n = 0;
	int day = 0;
	scanf("%d %d %d", &a, &b, &n);

	int wek = 0;//这是n个题数要做多少个星期
	int wkn = 0;//这是一周能写的题数
	int n1 = 0;//这是不够一周做的题数
	wkn = a * 5 + b * 2;
	//当需要写的题数不到一周时
	if (n < wkn)
	{
		int i = 0;
		for (i = 1;i <= 7;i++)//生成1到7的天数
		{
			//星期一到星期五时的比较
			if (i <= 5)
			{
				if (a * i > n)
				{
					day = i;
					break;
				}
			}
			//周六周天的比较
			else
			{
				if ((b * (i - 5) + a * 5) > n)
				{
					day = i;
					break;
				}
			}
		}
	}
	//当需要做的题数需要大于一周时
	else
	{
		wek = n / wkn;//得到需要做几个完整的周数
		n1 = n - wek*wkn;//得到除完整的周外，剩下的题数
		//接下来的判断同上面的一样
		int i = 0;
		for (i = 1;i <= 7;i++)
		{
			if (i <= 5)
			{
				if (a * i > n1)
				{
					day = i;
					break;
				}
			}
			else
			{
				if ((b * (i - 5) + a * 5) > n1)
				{
					day = i;
					break;
				}
			}
		}
		//得到不完整的那一周需要做几天后，再加上完整的周数的天数
		day = wek * 7 + day;
	}
	printf("%d", day);
	return 0;
}