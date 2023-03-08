#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void rotate(char* ch1)
{
	char tmp = 0;
	int left = 0;
	int right = strlen(ch1) - 1;
	while (left <= right)
	{
		tmp = ch1[left];
		ch1[left] = ch1[right];
		ch1[right] = tmp;
		left++;
		right--;
	}
}
void binary(int x, char* ch)
{
	//int notes = 0;
	while (x)
	{
		if (x % 2 == 0)
		{
			*ch = '0';
		}
		else
		{
			*ch = '1';
		}
		x = x / 2;
		ch++;
	}
	*ch = '\0';
	rotate(ch);
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
