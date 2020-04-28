#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//
// NULL 空指针 ； Null / NUL : '\0';
//操作对象是字符串 \0;
// strncmp : 字符串的比较 +个数
// strcat  : 字符串的追加 
// strncat : 字符串的自身追加 ＋个数
// strcpy  : 字符串的复制
// strncpy : + 复制的个数
// strstr  : 查找字符串 返回字符地址
// strtok  : 设置标点符号切开序列

//// strstr  : 查找字符串 返回字符地址
//char* my_strstr(const char* p1,const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 =(char*) p1;
//	char* s2 =(char*) p2;
//	char* cur =(char*) p1;
//	if (*p2 == '\0')
//	{
//		return(char*) p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 =(char*) p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* p1 = "abcdddef";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("子字符串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strtok : 分割
//int main()
//{
//	char arr[] = "gehengchen@qq.com";
//	char arr1[] = "@.";
//	char* ret = NULL;
//	for (ret = strtok(arr, arr1); ret != NULL;ret = strtok(NULL, arr1))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//
//int main()
//{
//	char ch = tolower('q'); // 字符转换函数
//	putchar(ch);
//	return 0;
//}

// memcpy 拷贝字节 （dest, src, sizeof(所求元素)）
// 整型数组的copy
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[30] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (num--)
//	{
//		*((char*)dest) = *((char*)src);
//		++(char*)dest;
//		++((char*)src);
//	}
//	return dest;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[30] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//结构体拷贝
//struct s
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct s arr1[] = { { "张三", 18 }, { "里斯", 20 } };
//	struct s arr2[2] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}


//int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//void gongyue_shu(int x, int y)
//{
//	int ret = max(x, y);
//	int i = 1;
//	for (i = ret; i > 0; i--)
//	{
//		if ((x%i == 0) && (y%i == 0))
//		{
//			printf("%d ", i);
//		}
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	gongyue_shu(a, b);
//	return 0;
//}

//二分查找
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int i = 0;
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下表是 %d", mid);
//			
//		}
//	}
//	return 0;
//}
