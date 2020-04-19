#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//杨辉三角
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		int n = 0;
//		for (n = 0; n < 9 - i; n++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d  ", arr[i][j]);
//		}
//
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";  //创建不同的地址存放相同的字符
//	char str2[] = "hello bit."; // 所以 str1!=str2
//	char *str3 = "hello bit.";//两个地址指向同一个字符
//	char *str4 = "hello bit.";//所以 str3==str4
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//int Square(int i)
//{
//	return i * i;
//}
//int main()
//{
//	int i = 0; 
//	i = Square(i);
//	for (; i<3; i++)
//	{
//		static int i = 1;
//		i += Square(i);    //1+1=2；
//		printf("%d,", i);
//	}
//	printf("%d\n", i);
//	return 0;
//}

//void test()
//{
//	static int num = 0;
//	num++;
//	printf("%d ", num);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

// 字符串左旋
//暴力法
//int left_move(char* arr,int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		//旋转
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}
//温和法 三部逆序
//void reverse(char* left, char* right)
//{
//	while (left<right)
//	{
//		char tmp = *(left);
//		*(left) = *(right);
//		*(right) = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k)
//{
//	int len = strlen(arr);
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr + k, arr + len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整体
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串
//int is_left_move(char* s1,char* s2)
//{
//	int i = 0;
//	int len = strlen(s1);
//	for (i = 0; i < len - 1; i++)
//	{
//		left_move(s1, 1);
//		int sz = strcmp(s1, s2);
//		if (sz==0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "defabc";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
int findnum(int arr[3][3], int k, int row, int col)
{
	int x = 0;
	int y = col - 1;
	while (y>=0&&x<row)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			return 1;
		}
	}
}
int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int k = 7;
	int ret = findnum(arr, k, 3, 3);
	if (ret == 1)
		printf("找到了\n");
	else
		printf("找不到\n");
}