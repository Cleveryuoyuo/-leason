#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//int max(int x, int y)
//{
//	if (x >= y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	int ret = max(x, y);
//	printf("%d\n", ret);
//	return 0;
//}

//int fact(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*fact(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = fact(n-i);
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//ģ��ʵ��strlen
// ����������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str!=0)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
// ��������ʱ����
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//ָ�뷽��
//int my_strlen(char* str)
//{
//	char* p = str;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - str;
//}
//int main()
//{
//	char arr[] = "abcdefdfhgkj";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//ģ��ʵ��strcopy
#include <assert.h>
//char my_strcopy(const char* dest, char* rol)
//{
//	assert(dest != NULL);
//	assert(rol != NULL);
//	while (*(dest)!=0)
//	{
//		*(rol)++ = *(dest)++;
//	}
//	return rol;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[30] = "";
//	char* ret = my_strcopy(arr1, arr2);
//	printf("%s\n", arr2);
//	return 0;
//}

//ģ��ʵ��strcmp
//int my_strcmp(char* str, char* rol)
//{
//	while (*(str) != 0 || *(rol) != 0)
//	{
//		if (*(str) > *(rol))
//			return 1;
//		else if (*(str) == *(rol))
//		{
//			str++;
//			rol++;
//		}
//		else
//			return -1;
//	}
//	return 0;
//}
//int main()
//{
//	char* p1 = "abcasdfg";
//	char* p2 = "abc";
//	int ret = my_strcmp(p1, p2); //�ú��������ȴ�С
//
//	printf("%d\n", ret);//p1�󷵻�+��p2�󷵻�-��
//	return 0;
//}

//ģ��ʵ��strcat  ׷��
char* my_strcat(char* arr,const char* arr1)
{
	char* tmp = arr;
	assert(arr&&arr1);
	//1.����\0
	while (*arr != 0)
	{
		arr++;
	}
	//2.����copy
	while (*arr++ = *arr1++)
	{
		;
	}
	return tmp;
}
int main()
{
	char arr[30] = "abcdef";
	char arr1[] = "ghghgh";
	char* ret = my_strcat(arr, arr1);
	printf("%s\n", arr);
	return 0;
}