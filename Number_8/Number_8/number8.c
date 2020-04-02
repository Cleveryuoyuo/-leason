#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0};   //越界错误代码
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

//int main()  //学习断电的使用
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);
//	}
//	return 0;
//}


//void my_strcpy(char* dest, char* str)
//{
//	while (*str != '\0')  //自己设置的copy_1
//	{
//		*dest = *str;
//		*dest++;
//		*str++;
//	}
//	*dest = *str;
//}
//
//void my_strcpy(char* dest, char* str)
//{
//	while (*dest++=*str++)    //自己设置的 copy_2
//	{
//		;
//	}
//}


#include<assert.h>  //断言库函数定义
//void my_strcpy(char* dest, char* str)
//{
//	assert(dest != NULL);//断言
//	assert(str != NULL);
//	while (*dest++ = *str++)    //自己设置的 copy_3
//	{                           
//		;
//	}
//
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "nishizhu";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

// const 使代码具有常属性,不会变值
//char* my_strcpy(char* dest,const char* str)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(str != NULL);//使其不能等于空指针才可以存入
//	//吧str指向的字符串拷贝到dest指向的空间，包含'\0'字符。
//	while (*dest++ = *str++)    //自己设置的 copy_4
//	{
//		;                       //完美的 my_copy! 
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "nishizhu";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	//const int* p = &num; //const 不能通过p 改变num
//	int n = 100;
//	p = &n;
//	//int*const p = &num;  // const 让p不会改变 修饰的是指针变量p
//	*p = 20; 
//	printf("%d ", num);
//}

//int my_strlen(const char* arr)
//{
//	int count = 0;
//	assert(arr != NULL); //保证指针的有效性
//	while (*arr!='\0')   //完美的ny_strlen
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[]= "abcde";
//	int len = my_strlen(arr);
//	printf("%d ", len);
//	return 0;
//}

//void test(void)
//{
//	printf("hehe\n");
//}
//int main()
//{
//	//unsigned; //无符号
//	//signed;//有符号
//	int a = 0;
//	test(10);
//}

// 整数在内存中存放的是二进制补码 因为二进制位补码才能计算结果
//int main()
//{
//	1 - 1;
//	//1+(-1)
//	//00000000000000000000000000000001 - 源码
//	//00000000000000000000000000000001 - 补码 正数和无符号数 原藩部相同
//	//10000000000000000000000000000001 - 源码
//	//11111111111111111111111111111111 - 补码
//	//100000000000000000000000000000000 - 1+（-1） 补码的计算结果 因为是整形，
//// 只能存放三十二个比特位，所以第一位舍弃，得到结果00000000000000000000000000000000
//
//}


//简述大端字节序和小端字节序的概念： 大端字节序就是将所存放的十六进制位按低位到高地址存放的的顺序存放
//设计小程序判断机器的字节序。 
//int main()
//{
//	int a = 20;
//	char* p = (char*)&a;
//	if (*p = 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//int check_sys() //另一种制作方法验证 更高级。
//{
//	int a = 1;
//	
//	return *(char*)&a;  //返回1 小端，返回0，大端；
//}
//int main()
//{
//	int ret=check_sys();
//	if (ret = 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001 - 源码
//	//11111111111111111111111111111111 - 补码（存放的码）
//	//11111111 - 一个字节的补码
//	//整形提升 符号位 - 11111111111111111111111111111111 - 补码
//	//所以返回源码为 100000000000000000000000000001
//	signed char b = -1;
//	//11111111111111111111111111111111 - 补码
//	//与第一个一个思路
//	unsigned char c = -1;
//	//一个字节的补码 - 11111111
//	//无符号数 整型提升 补码 - 00000000000000000000000011111111 - 无符号数 原藩部相同
//	printf("%d %d %d ", a, b, c);
//	return 0;
//}


//int main()
//{
//	char a = 128;
//	//10000000000000000000000010000000 - 源码
//	//11111111111111111111111110000000 - 补码
//	//10000000 - 一个字节的补码
//	//%u 无符号十进制整数
//	//整型提升 - 11111111111111111111111110000000 - 补码 -(因为是%u所以认为无符号)
//	// 无符号 原反补相同 直接打印补码的值！！！
//	printf("%u ", a);
//	return 0;
//	return 0;
//}

//有符号char -128 - 127;
//无符号数 char 0 - 255

//int main()
//{
//	int i = -20;
//	unsigned j = 10;
//	printf("%d ", i + j);
//	//10000000000000000000000000010100 - 源码
//	//11111111111111111111111111101100 - 补码
//	//00000000000000000000000000001010 - 源码 - 补码
//	//11111111111111111111111111110110 - i+j - 补码
//	//11111111111111111111111111110101 - i+j - 反码
//	//10000000000000000000000000001010 - i+j - 源码
//	
//	return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	//char只能表示-128 - 127 的数字。所以会转换
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//		//-1....-128,(-128-1=127),126...0(到0停止)，所以255个字符的空间
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//int main()
//{
//	unsigned char i = 0;
//	for (i = 0; i <= 255; i++) //因为是char 只属于 0 - 255，所以不会大于char 
//	{
//		printf("nihao\n"); //所以无限循环
//	}
//	return 0;
//}









