#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int ab = 0x11223344;
//	int a = 1;
//	char* pa = (char*)&a;
//	if (*pa == 1)
//	{
//		printf("%d", *pa);
//		printf("是小端存储");
//	}
//	else
//	{
//		printf("%d", *pa);
//		printf("是大端存储");
//	}
//	return 0;
//}
int main()
{
	//char* aa[] = { "abc","at","aolbb" };
	//char** pa = &aa;
	//pa++;
	////printf("%p", *pa);
	//if (pa == (&aa + 1))
	//	printf("相等");
	//else
	//	printf("不相等");
	char* c[] = { "aaa","bbbb","cccc" };
	char** cp = c;
	char*** cpp = cp;
	printf("%s", *cp);
	return 0;
}