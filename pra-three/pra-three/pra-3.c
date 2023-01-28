//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	scanf_s("%d", &age);
//	if (age < 18)
//		printf("少年");
//	else if (age < 30 && age>18)
//		printf("青年");
//	else if (age < 50 && age>30)
//		printf("壮年");
//	else if (age < 80 && age>50)
//		printf("老年");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	//int b = a / 2;
//	if (a%2==0)
//	{
//		printf("a是偶数");
//	}
//	else
//	{
//		printf("a是奇数");
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int i = 0;
		for (i = 0;i <= 100;i++)
		{
			if (i % 2 == 1)
			{
				static int a = 1;
				printf("第%d次打印：", a);
				printf("%d\n", i);
				a++;
			}
		}
	return 0;
}