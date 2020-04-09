#define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	short *p = (short*)arr;
//	int i = 1;
//	*(p + i) = 0;
//	printf("%d ", arr[i]);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//int sum(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int(*parr[5])(int, int) = { add, sum, mul, div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", (parr[i](2,5)));  //这里不要*parr 
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
//int main()
//{
//	char*(*pf)(char*, const char*) = my_strcpy;
//	char	*(*pfarr[4])(char*, const char*) = ;
//	return 0;
//}


//int add(int x, int y)
//{
//	return x + y;
//}
//int sum(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	printf("******************\n");
//	printf("**1 加法  2 减法**\n");
//	printf("**3 乘法  4 除法**\n");
//	printf("******************\n");
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	printf("请选择");
//	scanf("%d ", &input);
//	printf("请输入两个数");
//	scanf("%d %d", &x, &y);
//	switch (input)
//	{
//	case 1:
//		printf("%d ", add(x,y));
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 9;
//	//00000000 00000000 00000000 00001001
//	int b = 3;
//	//00000000 00000000 00000000 00000011
//	int ret = a^b;
//	int i = 0;
//	int len = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((ret & 1) == 1)
//			len++;
//		ret >>= 1;
//	}
//	printf("%d ", len);
//	return 0;
//}

//打印整数二进制的奇数位和偶数位！！！
//int main()
//{
//	int a = 9;  //00000000 00000000 00000000 00001001
//	int i = 0;
//	for (i = 0; i < 31; i+=2) //打印奇数位
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	for (i = 1; i < 32; i += 2) //打印偶数位
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//
//	return 0;
//}
// 写一个函数返回参数二进制中 1 的个数。

//int retur_n(int x)
//{
//	int j = 0;
//	int count = 0;
//	for (j = 0; j < 31; j++)
//	{
//		if (((x >> j) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 9;
//	int ret=retur_n(a);
//	printf("%d ", ret);
//	return 0;
//}
//交换两个变量（不创建临时变量）

//int main()
//{
//	int a = 1;
//	int b = 4;
//	a += b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}

//使用指针打印数组内容

//int main()
//{
//	int arr[] = { 2, 3, 4, 2, 6, 8 };
//	int *parr = &arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(parr + i));
//	}
//	return 0;
//}
#include <string.h>
//字符串逆序
//void befo_r (int* arr,int sz)
//{
//	int i = 0;
//	for (i = sz; i >= 0; i--)
//	{
//		printf("%d ", arr[*(arr+(i-1))]);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	befo_r(arr,sz);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &a);
//	int ret = a;
//	int i = 0, sn = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ret = (ret * 10) + a;
//		sn = sn + ret;
//		printf("%d ", sn);
//	}
//	return 0;
//}
// 求出0～100000之间的所有“水仙花数”并输出。“水仙花数”是指一个n位数，
// 其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//还没做完
//int main()
//{
//	int i = 0;
//	printf("请输入:>");
//	scanf("%d", &i);
//	int count = 0;
//	while (i / 10)
//	{
//		count++;
//	}
//	while ()
//	
//	return 0;
//}


//用C语言在屏幕上输出以下图案：
//                *           
	//		  * * *
	//		* * * * *
	//	  * * * * * * *
	//	    * * * * *
	//		  * * * 
	//		    *