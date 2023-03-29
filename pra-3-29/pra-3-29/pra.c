#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Rid(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main(void)
//{
//	void menu();
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择->");
//		scanf("%d", &input);
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个整数，中间空格隔开->\n");
//			scanf("%d %d", &x, &y);
//			ret = Add(x,y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个整数，中间空格隔开->\n");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个整数，中间空格隔开->\n");
//			scanf("%d %d", &x, &y);
//			ret = Rid(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个整数，中间空格隔开->\n");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		default:
//			break;
//		}
//	} while (input);
//	return 0;
//}
//void menu()
//{
//	printf("***********************\n");
//	printf("*****1.加   2.减*******\n");
//	printf("*****3.乘   4.除*******\n");
//	printf("*****  0.退出   *******\n");
//	printf("***********************\n");
//}
//用函数指针数组编写
//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Rid(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main(void)
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	void menu();
//	int (*pfArr[5])(int, int) = { 0,Add,Sub,&Rid,&Div };
//	do
//	{
//		menu();
//		printf("请选择->");
//		scanf("%d", &input);
//		if (input > 0 && input < 5)
//		{
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//	} while (input);
//	return 0;
//}
//void menu()
//{
//	printf("***********************\n");
//	printf("*****1.加   2.减*******\n");
//	printf("*****3.乘   4.除*******\n");
//	printf("*****  0.退出   *******\n");
//	printf("***********************\n");
//}
//用回调函数编写
#include<stdio.h>
int Call(int (*pf)(int, int))//回调函数
{
	printf("请输入两个整数，中间空格隔开->\n");
	int x = 0;
	int y = 0;
	int ret = 0;
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	return ret;
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Rid(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main(void)
{
	void menu();
	int input = 0;
	do
	{
		menu();
		printf("请选择->");
		scanf("%d", &input);
		//int x = 0;
		//int y = 0;
		//int ret = 0;
		switch (input)
		{
		case 1:
			printf("%d\n", Call(Add));
			break;
		case 2:
			printf("%d\n", Call(Sub));
			break;
		case 3:
			printf("%d\n", Call(Rid));
			break;
		case 4:
			printf("%d\n", Call(Div));
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}
void menu()
{
	printf("***********************\n");
	printf("*****1.加   2.减*******\n");
	printf("*****3.乘   4.除*******\n");
	printf("*****  0.退出   *******\n");
	printf("***********************\n");
}
