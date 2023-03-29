#define _CRT_SECURE_NO_WARNINGS
//打印出杨辉三角
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1

//#include<stdio.h>
//int main(void)
//{
//	int arr[11][11] = { 0 };
//	int line = 10;
//	int up = 6;
//	//scanf("%d %d", &line,&up);
//	int i = 0;//行数
//	for (i = 1;i <= line;i++)
//	{
//		arr[i][0] = up;
//		//打印出每一行的数字
//		int j = 0;
//		for (j = 0;j <i ;j++)
//		{
//			if (i >= 2)
//			{
//				arr[i][j + 1] = arr[i - 1][j] + arr[i - 1][j + 1];
//			}
//			printf("%d ", arr[i][j]);
//		}
//		//换行
//		printf("\n");
//	}
//	return 0;
//}
//猜凶手
//A：不是我，B：是c，C：是d，d：c在胡说
//四个人中只有一个人在说假话，其他三个人都是真话
//写出一个程序，求出凶手是谁
//#include<stdio.h>
//int main(void)
//{
//	char killer = 0;
//	for (killer = 'A';killer <= 'D';killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("%c", killer);
//		}
//	}
//	return 0;
//}
//36匹马，6个跑道，没有计数器去赛马，最少比赛多少次确定36匹马的前三名
//5位运动员参加了10米跳水比赛，有人让她们预测比赛结果
//#include<stdio.h>
//int main(viod)
//{
//	short a = 0;
//	short b = 0;
//	short c = 0;
//	short d = 0;
//	short e = 0;
//	for (a = 1;a <= 5;a++)
//	{
//		for (b = 1;b <= 5;b++)
//		{
//			for (c = 1;c <= 5;c++)
//			{
//				for (d = 1;d <= 5;d++)
//				{
//					for (e = 1;e <= 5;e++)
//					{
//						if (((b == 2) + (a == 3)==1)//a
//							&& ((b == 2) + (e == 4)==1)//b
//							&& ((c == 1) + (d == 2)==1)//c
//							&& ((c == 5) + (d == 3)==1)//d
//							&& ((e == 4) + (a == 1)==1)==1)//e
//						{
//							if(a*b*c*d*e==120)
//							printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
#include<stdio.h>
int add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 2;
	int b = 3;
	add(a,b);
	int (*pf)(a, b) = &add;
	printf("%d %d", pf(a,b), (*pf)(6,7));

	return 0;
}