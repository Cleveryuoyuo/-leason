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
//		printf("%d ", (parr[i](2,5)));  //���ﲻҪ*parr 
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
//	printf("**1 �ӷ�  2 ����**\n");
//	printf("**3 �˷�  4 ����**\n");
//	printf("******************\n");
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	printf("��ѡ��");
//	scanf("%d ", &input);
//	printf("������������");
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

//��ӡ���������Ƶ�����λ��ż��λ������
//int main()
//{
//	int a = 9;  //00000000 00000000 00000000 00001001
//	int i = 0;
//	for (i = 0; i < 31; i+=2) //��ӡ����λ
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	for (i = 1; i < 32; i += 2) //��ӡż��λ
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//
//	return 0;
//}
// дһ���������ز����������� 1 �ĸ�����

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
//����������������������ʱ������

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

//ʹ��ָ���ӡ��������

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
//�ַ�������
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
//	printf("������һ����:>");
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
// ���0��100000֮������С�ˮ�ɻ��������������ˮ�ɻ�������ָһ��nλ����
// ���λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//��û����
//int main()
//{
//	int i = 0;
//	printf("������:>");
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


//��C��������Ļ���������ͼ����
//                *           
	//		  * * *
	//		* * * * *
	//	  * * * * * * *
	//	    * * * * *
	//		  * * * 
	//		    *