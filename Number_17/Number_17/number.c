#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//位段 下面这段代码转换在16进制就是22 03 04
//struct stu 
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct stu s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}
//
//struct s
//{
//	int a;
//	char c;
//	double d;
//};
//void init(struct s* ps)
//{
//	ps->a = 100;  // 结构体地址传参 ps->
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//void print1(struct s s)
//{
//	printf("%d  %c  %lf\n", s.a, s.c, s.d);
//}
//void print2(struct s* s)
//{
//	printf("%d  %c  %lf\n", s->a,s->c,s->d);
//}
//int main()
//{
//	struct s s = { 0 };
//	init(&s);
//	print1(s);
//	print2(&s);
//	return 0;
//}

//#define mtn 0  // 不需要分号
////枚举类型
//enum dog
//{
//	tugou = 8,
//	taidi,
//	keji
//};
//int main()
//{
//	enum dog my = tugou;
//	printf("%d %d %d\n", tugou, taidi, keji);
//	return 0;
//}

// 联合体 - 共用体 - 大小为最大成员的大小 
// 共用一块空间 不可同时使用两个成员变量
//union un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//}
// 判断 大小端
//int main()
//{
//	int a = 1;
//	int ret = *(char*)(&a);
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
// //方法二
//int chack_sys()
//{
//	union un
//	{
//		int i;
//		char c;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret = chack_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

// 联合体的大小存在对齐数
//union un
//{
//	int i;  // 4 8 4
//	char arr[5]; // 5 1 5
//}u;
//int main()
//{
//	printf("%d\n", sizeof(u)); // ==8
//}
//模拟memmove
//void* my_memove(void* dest,void* src,int k)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest >= src)
//	{
//		while (k--)
//		{
//			*((char*)dest + k) = *((char*)src + k);
//		}
//	}
//	else
//	{
//		while (k--)
//		{
//			*((char*)dest) = *((char*)src);
//			++(char*)dest;
//			++((char*)src);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	my_memove(arr+1,arr+1,4);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
int main()
{
	long i = 10;
	printf("%d\n", sizeof(i));
}
