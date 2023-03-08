#define _CRT_SECURE_NO_WARNINGS 1

//my_strlen
//1.const
//2.assert
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
////size_t - unsigned int无符号整形
//size_t my_strlen(const char* ch)
//{
//	//assert(ch != NULL);
//	assert(ch);
//	int count = 0;
//	while (*ch++ != 0)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char ch1[] = "Hello myz";
//	printf("%d",my_strlen(ch1));
//	//printf("长度：%d", strlen(ch1));
//	
//}
//c=6  a=6,b=7 a=8,b=21 c=8
#include<stdio.h>
void binary(int x,char* ch)
{
	//int notes = 0;
	while ( x )
	{
		x = x / 2;
		if (x % 2 == 0)
		{
			*ch = '0';
		}
		else
		{
			*ch = '1';
		}
		ch++;
	}
	*ch = '\0';
}
int main()
{
	int count = 0;
	char chech[10] = { 0 };
	scanf("%d", &count);
	binary(count, chech);
	printf("%s", chech);
	return 0;
}