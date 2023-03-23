#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 0,1,2,3,4 };
//	int arr1[] = { 5,6,7,8,9 };
//	int arr2[] = { 10,11,12,13,14 };
//	int* par[] = { arr,arr1,arr2 };
//	int i = 0;
//	for (i = 0; i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			//printf("%d ",*(par[i]+j));
//			printf("%d ", par[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = -1;
//	printf("%u", i);
//	return 0;
//}
//求Sn=a+aa+aaa+aaaa+aaaaa的前五项之和，其中a是一个数字
//例如：2+22+222+2222+22222
//2+(2*10+2)+{2*100+(2*10+2)}+{2*1000+(2*100+(2*10+2))}
//#include<stdio.h>
//int main()
//{
//	int num = 2;
//	scanf("%d", &num);
//	int tmp = 0;
//	int creat = num;
//	int sum = 0;
//	int i = 0;
//	for (i = 10;i < 10001;i *= 10)//生成10,100,1000
//	{
//		tmp = num * i;
//		creat += tmp;
//		printf("%d\n", creat);
//		sum += creat;
//	}
//	printf("%d", sum+2);
//	return 0;
//}
//#include<stdio.h>
//int main(viod)
//{
//	int num = 0;
//	int n = 0;
//	scanf("%d %d", &num, &n);
//	int ret = 0;
//	int sum = 0;
//	int i = 0;
//
//	for (i = 0;i < n;i++)
//	{
//		ret = ret * 10 + num;//生成2,22,222,2222
//		printf("%d\n", ret);
//		sum += ret;//将每一项相加
//	}
//	printf("%d", sum);
//	return 0;
//}
//打印水仙花数
//求出0-100000之间所有水仙花数并输出
// 水仙花数是指一个n位数，其各位数字的n次方之和等于该1数本身
// 如153=1^3+5^3+3^3,则153是一个水仙花数。
//
//#include<stdio.h>
//int main(void)
//{
//	//int num = 0;
//	int bod = 100000;//边界
//	//scanf("%d ", &bod);
//	int i = 0;
//	int tmp = 0;//存放个位数
//	int ret = 0;//个位数的相乘
//	int sum = 0;//各位数相乘后相加
//	int tmp1 = 0;//存放去掉个位数的数
//
//	for (i = 0;i < bod;i++)
//	{
//		//判断是否为水仙花数的函数
//		tmp = 0;
//		ret = 1;
//		sum = 0;
//		tmp1 = 0;
//		if (i > 9)
//		{
//			tmp1 = i;
//			do
//			{
//				tmp = tmp1 % 10;//分离出每位数的个位
//				ret = tmp*tmp*tmp;//得出每位数的三次方
//				sum += ret;
//				tmp1 = tmp1 / 10;
//			} while (tmp1 > 0);
//			if (sum == i)
//				printf("%d\n", i);
//			else
//				continue;
//		}
//		else
//		{
//			if (i * i* i == i)
//				printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//	int i = 0;
//	for (int i = 0;i < 1000000;i++)
//	{
//		//判断是否是自幂数
//		//判断位数
//		int tmp = 0;
//		int dig = 1;
//		tmp = i;//123
//		while (tmp/10)
//		{
//			dig++;
//			tmp /= 10;//12,1
//		}
//		//求出每位数幂数的和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, dig);//求个位数的dig次方的函数，pow（n，w）
//			tmp /= 10;
//		}
//		//判断
//		if (i == sum)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//打印一个菱形
//#include<stdio.h>
//int main(void)
//{
//	char arr[] = "*************";
//	char arr1[] = "            ";
//	int sl = strlen(arr)-1;
//	int mid = sl / 2;
//	int left = 0;
//	int right = 0;
//	arr1[mid] = arr[mid];
//	printf("%s\n", arr1);
//	left = mid - 1;
//	right = mid + 1;
//	while (right<sl)
//	{
//		arr1[left] = arr[left];
//		arr1[right] = arr[right];
//		printf("%s\n", arr1);
//		left--;
//		right++;
//	}
//	
//	return 0;
//}
//喝汽水问题，一元可以买一瓶汽水，两个空瓶可以买一瓶汽水，20块钱能买多少汽水。
//#include<stdio.h>
//int main(void)
//{
//	int money = 20;
//	int bottle = 0;
//	int price = 1;
//	int drink = 0;
//	scanf("%d", &money);
//	while (money)
//	{
//		//用钱买汽水
//		if (bottle != 2)
//		{
//			money -= price;
//			drink++;
//			bottle++;
//		}
//	    //用瓶子买汽水
//		if (bottle == 2)
//		{
//			bottle = 0;
//			drink++;
//			bottle++;
//		}
//	}
//	printf("%d", drink);
//	return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0;i <= 12;i++)
//	{
//		arr[i] = 0;
//		printf("hello bit");
//	}
//	return 0;
// //造成死循环的原因:1,i和arr数组是局部变量放在栈里面，而栈是先使用高地址再使用低地址的
//2,而i先创建之后作为高地址，arr相对于i来说是低地址
//3,数组在访问的时候是由低到高的地址访问的
//4,因此数组越界访问时很大几率会访问到i的地址空间并且将i的值修改为0，造成死循环
//}

//将数组中的奇数放在前半段，偶数部分放在后半段。
//#include<stdio.h>
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	int* ta = arr;
//	int tmp = 1;
//	int i = 0;
//	while (pa < arr+9)
//	{
//		if ((*pa) % 2 == 0)
//		{
//			tmp = *pa;
//		}
//		else
//		{
//			*ta = *pa;
//			*pa = tmp;
//			ta = pa;
//		}
//		pa++;
//
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//void move(int* arr,int s)
//{
//	int odd[10] = { 0 };
//	int even[10] = { 0 };
//}
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sa = sizeof(arr) / sizeof(arr[0]) - 1;
//	move(arr,sa);
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}