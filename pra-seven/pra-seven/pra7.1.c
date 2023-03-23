#define _CRT_SECURE_NO_WARNINGS
//打印出杨辉三角
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1

#include<stdio.h>
int main(void)
{
	int line = 6;
	int up = 1;
	//scanf("%d %d", &line,&up);
	int i = 0;//行数
	for (i = 1;i <= line;i++)
	{
		//打印出每一行的数字
		int j = 0;
		for (j = 0;j <i ;j++)
		{
			printf("%d ", up);
		}
		//换行
		printf("\n");
	}
	return 0;
}