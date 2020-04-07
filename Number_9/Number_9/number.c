#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int j = 0;
//	int ret = 0;
//	for (i = 0; i < 14; i++)
//	{
//		for (j = 0; j < 18; j++)
//		{
//			int a = 0;
//			scanf("%d", &a);
//			sum += a;
//		}
//		printf("%d ", sum);
//		ret = ret + sum;
//	}
//
//	printf("%d",ret);
//
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	//1001
//	//(-1)^0 * 1.001 * 2^3   存e 要加127存他的二进制数 存M要舍去头号1
//	//0 130的二进制数 00000000000000000001001;
//	//int  00000000 00000000 00000000 00001001;
//	float *pfloat = (float*)&n;
//	//float  0 00000000 00000000000000000001001;
//	// s=0; e= -127; m=
//	printf("%d\n", n);
//	printf("%f\n", *pfloat);  //这个就会把整形存储的二进制序列读成浮点数存储
//	return 0;                
//} 

//void tear(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	tear(arr); //传首元素地址
//	return 0;
//}

//int main()
//{
//	///*char ch = 'w';
//	//char *pc = &ch;*/
//	//char arr[] = "abcdef";
//	//char *pc = arr;
//	//printf("%s\n", arr);
//	//printf("%s\n", pc);
//	char* p = "abcdef";  //把首字符的地址存放到p
//	printf("%c\n", *p);//%c打印一个字符
//	printf("%s\n", p);
//	return 0;  
//}

//int main()
//{
//	char arr1[] = "abcdef"; // arr 表示地址 地址不同 所以打印laji
//	char arr2[] = "abcdef";
//	char *p1 = "abcdef"; // 常量字符串  不能修改i 其实只存了一份儿；
//	char *p2 = "abcdef"; //  p1和p2只指向同一个地址
//	//if (arr1 == arr2)
//	//{
//	//	printf("yes\n");
//	//}
//	//else
//	//{
//	//	printf("laji\n");
//	//}
//	if(p1==p2)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("laji\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int i = 0;
//	int* arr[4] = { &a, &b, &c, &d }; //指针数组 
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char* arr1[5];
//	char* (*pa)[5] = &arr1;
//	int arr[10] = { 10,1,2,3,4,5,6,7,8,9 };
//	// arr - 首元素地址
//	// &ar[0] - 首元素地址
//	// &arr - 数组地址
//	int(*p)[10] = &arr;
//	//数组指针
//	return 0;
//} 

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*p + i));
//	}*/
//	return 0;
//}

void print1(int arr[3][5], int x, int y) //原始方法 参数是数组的形式
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int (*p)[5], int x, int y)  //参数是指针的形式
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{

			printf("%d ", *(*(p + i) + j)); //p+i指的是行名 也就是首元素的位置
		}       //此处的首元素是 五个数
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	//arr - 数组名 - 首元素地址
	//对于二维数组 首元素地址是 
	//把二维数组想象成一维数组 则只有三个元素 
	print1(arr, 3, 5); //原始方法 
	print2(arr, 3, 5);
	return 0;
}

//int arr[5]  //一个整型数组 五个元素
//int *parr1[10]  //一个数组 十个元素 类型是 int *,指针数组
//int(*parr2)[10]  //一个指针 指向一个数组 数组10个元素 类型是int
//int(*parr3[10])[5]   //数组 十个元素 每个元素是一个数组指针 指向的数组有五个元素 每个元素是int

