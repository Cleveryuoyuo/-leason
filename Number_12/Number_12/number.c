#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
//��C��������Ļ���������ͼ����

//int reserve(char* arr1,int sz,char* arr2)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr1[i + 1];
//	}
//}
//
//int main()
//{
//	char arr1 = "AABCD";
//	char arr2 = "BCDAA";
//	int sz = strlen(arr1);
//	reserve(arr1,sz,arr2);
//	return 0;
//}

//int sum(int a, int b)
//{
//	int i = 0, s = 0;
//	for (i = a; i <= b; i++)
//	{
//		s = s + i;
//	}
//	return s;
//}
//int main()
//{
//	int t1 = sum(1, 100);
//	int t2 = sum(2, 20);
//	printf("%d %d", t1, t2);
//	return 0;
//}



//      *
//     ***     ����
//    *****  
//   *******
//  *********     9
// ***********    11
//*************   13
//                11
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	//��ӡ�ϰ벿��
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		//�ϰ벿��
//		//��ӡ�ո�
//		for (j = 0; j < (line - 1 - i); j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < (2 * i + 1); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i <= line - 1; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * (line - i - 1) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = total;
//	while (empty >= 2)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}

//ģ��ʵ��strlen
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello world";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}

//ģ��ʵ�� strcopy;
//void my_strcopy(int* arr1, int* arr2, int sz)
//{
//	int i = 0;
//	printf("arr1=");
//	for (i = 0; i < sz; i++)
//	{
//		arr1[i] = arr2[i];
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	printf("arr2=");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[] = { 0 };
//	int arr2[] = { 0 };
//	scanf("%d", &arr2);
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	my_strcopy(arr1, arr2, sz);
//	return 0;
//}


//��������ʹ����ȫ����λ��ż��ǰ�档
//int reserve(int *arr1, int sz)
//{
//	int right = 0;
//	int left = sz - 1;
//	while (right < left)
//	{
//		while (right<left&&arr1[right] % 2 == 1) 
//		{
//			right++;
//		}
//		while (right<left&&arr1[left] % 2 == 0)
//		{
//			left--;
//		}
//		if (right < left)
//		{
//			int tmp = arr1[right];
//			arr1[right] = arr1[left];
//			arr1[left] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	reserve(arr1,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//}

// char���ʹ� -127 -- 128
// �޷����� 0 - 255��
//int main()
//{
//	unsigned char a = 200;  // char���ʹ� -127 -- 128
//	//1100 1000             // �޷����� 0 - 255��
//	unsigned char b = 100;
//	//0110 0100
//	//00000000 00000000 0000 0001 0010 1100
//	unsigned char c = 0; // 0010 1100  == 44
//	c = a + b;
//	printf("%d %d", a + b, c);  
//	return 0;
//}

//unsigned int a = 0x1234; // ��� 00 00 12 34   ��λ�ߵ�ַ
//unsigned char b = *(unsigned char *)&a;
// ��32λ���ģʽ�������ϱ���b = () ? 00 11 01 00
// Bֻ�ܷ���ǰ�����ֽ� 00 

//int main()
//{
//	//char -128 -- 127
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i<1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2....-128 127....1 0 == 255
//	printf("%d", strlen(a)); //strlen ����0 ֹͣ �����ܹ�255
//	return 0;
//}

