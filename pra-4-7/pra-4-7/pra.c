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
//	printf("hello world");//printf  	//scanf  ����
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n;i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}
//}
//ģ��ʵ��strcat��strcmp��strcpy
#include<stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;
	int n = 0;
	int day = 0;
	scanf("%d %d %d", &a, &b, &n);

	int wek = 0;//����n������Ҫ�����ٸ�����
	int wkn = 0;//����һ����д������
	int n1 = 0;//���ǲ���һ����������
	wkn = a * 5 + b * 2;
	//����Ҫд����������һ��ʱ
	if (n < wkn)
	{
		int i = 0;
		for (i = 1;i <= 7;i++)//����1��7������
		{
			//����һ��������ʱ�ıȽ�
			if (i <= 5)
			{
				if (a * i > n)
				{
					day = i;
					break;
				}
			}
			//��������ıȽ�
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
	//����Ҫ����������Ҫ����һ��ʱ
	else
	{
		wek = n / wkn;//�õ���Ҫ����������������
		n1 = n - wek*wkn;//�õ������������⣬ʣ�µ�����
		//���������ж�ͬ�����һ��
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
		//�õ�����������һ����Ҫ��������ټ�������������������
		day = wek * 7 + day;
	}
	printf("%d", day);
	return 0;
}