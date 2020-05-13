#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL) //打印错误原因
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//#define N 40
//int number(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		printf("请输入成绩:>");
//		scanf("%d", &arr[i]);
//		if (arr[i]>0)
//		{
//			;
//		}
//		else
//			break;
//	}
//	return i;
//}
//int hege_number(int arr[],int k)
//{
//	int j = 0;
//	int tmp = 0;
//	for (j = 0; j < k; j++)
//	{
//		tmp += arr[j];
//	}
//	int ret = tmp / k;
//	int count = 0;
//	for (j = 0; j < k; j++)
//	{
//		if (arr[j]>ret)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int arr[N] = { 0 };
//	int n = number(arr,N);
//	printf("总人数是 %d\n", n);
//	int m = hege_number(arr,n);
//	printf("合格的人数是 %d\n", m);
//	return 0;
//}

//int PositveNum(int a[], int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (a[i]>0)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a[] = { -4, -3, -2, -1, 0, 1, 2, 3, 4, 5 };
//	int n = 10;
//	int ret = PositveNum(a, n);
//	printf("%d\n", ret);
//}

//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	printf("请输入十个数字\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int j = 0;
//	for (j = 0; j < 10; j++)
//	{
//		printf("%d ", a[j]);
//	}
//	printf("%d", a[3]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	int j = 0;
//	for (j = 0; j < 10; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}
//从键盘输入10个整数、用函数编程实现计算其最大值和最小值，并交换它们在数组中的位置。

//void GetMemory(char *p) //形参 之在函数内部有效
//{
//	p = (char *)malloc(100);// 内存泄漏 没有free
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);  //以值传递
//	strcpy(str, "hello world");//崩溃 P离开函数就消失了
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//  正解
//void GetMemory(char** p)
//{
//	*p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);  
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//柔性数组  1.
//struct s
//{
//	int n;
//	int a[0];
//};
//int main()
//{
//	//struct s s;
//	//printf("%d\n", sizeof(s));
//	struct s* ps = (struct s*)malloc(sizeof(struct s) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->a[i] = i;
//	}
//	struct s* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->a[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->a[i]);
//	}
//	return 0;
//}
//2.
struct s
{
	int n;
	int* arr;
};
int main()
{
	struct s* ps = (struct s*)malloc(sizeof(struct s));
	ps->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//调整大小
	int* ptr = realloc(ps->arr, 10 * 4);
	if (ptr != NULL)
	{
		;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	return 0;
}








