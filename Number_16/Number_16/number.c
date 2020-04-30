#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
////my_memmove!
//void* my_memmove(void* dest, void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*((char*)dest) = *((char*)src);
//			++(char*)dest;
//			++((char*)src);
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	my_memmove(arr + 3, arr, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
// //memset zhi可以处理char
//int main()
//{
//	char arr[11] = "";
//	memset(arr, '&', 10);
//	printf("%s\n", arr);
//	return 0;
//}

////  结构体类型 类似于int char 等
//struct p
//{
//	float weight;
//};
//struct std
//{
//	struct p pt;
//	char name[20];
//	char sex[10];
//	int age;
//}w, e, r;     // 全局结构体变量
//struct std q; //全局变量
//int main()
//{
//	struct std s = { { 61.2 }, "zhangsan", "nan",18};//局部结构体变量
//	printf("%f %s %s %d\n", s.pt.weight,s.name,s.sex,s.age);
//	return 0;
//}

// // typedef : 重定义
//struct stu
//{
//	char name[20];
//	struct stu* next;
//};
//int main()
//{
//	return 0;
//}

//// 结构体传参
//struct s
//{
//	int a;
//	char c;
//	float d;
//};
//void init(struct s* ps)
//{
//	ps->a = 100;
//	ps->c = 'c';
//	ps->d = 62.1;
//}
//void print(struct s s)
//{
//	printf("%d %c %lf\n", s.a, s.c, s.d);
//}
//int main()
//{
//	struct s s = { 0 };
//	init(&s);  // 改变结构体的内容 得传地址
//	print(s);
//	return 0;
//}

// 学校作业
//二.1.选择结构程序设计
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	printf("请输入三个数 ：> ");
//	scanf("%d%d%d", &x, &y, &z);
//	if (x >= y&&x >= z)
//	{
//		printf("%d\n", x);
//	}
//	if (y >= x&&y >= z)
//	{
//		printf("%d\n", y);
//	}
//	if (z >= x&&z >= y)
//	{
//		printf("%d\n", z);
//	}
//	return 0;
//}
//2.
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入一个数字x :>");
//	scanf("%d", &x);
//	if (x < 10)
//	{
//		printf("y = %d\n",x);
//	}
//	else if (x >= 10 && x < 50)
//	{
//		printf("y = %d\n", (3*x-2));
//	}
//	else if (x >= 50 && x < 100)
//	{
//		printf("y = %d\n", (4*x+1));
//	}
//	else
//	{
//		printf("y = %d\n", (5*x));
//	}
//	return 0;
//}
//三：用不上while啊
//int main()
//{
//	char ps = '0';
//	scanf("%c", &ps);
//	if (ps > 'c'&&ps < 'x')
//	{
//		printf("它的加密输出是 : %c\n", (ps + 3));
//		printf("它的解密输出是 : %c\n", (ps - 3));
//	}
//	else if (ps <= 'c')
//	{
//		printf("它的加密输出是 : %c\n", (ps + 3));
//		printf("它没有解密输出\n");
//	}
//	else
//	{
//		printf("它没有加密输出\n");
//		printf("它的解密输出是 : %c\n", (ps - 3));
//	}
//	return 0;
//}
//四 ：判断是否为素数
//int main()
//{
//	int a = 0;
//	int i = 0;
//	scanf("%d", &a);
//	for (i = 2; i < a; i++)
//	{
//		if (a%i == 0)
//		{
//			printf("他不是素数\n");
//			return 0;
//		}
//	}
//	printf("他是素数\n");
//	return 0;
//}








