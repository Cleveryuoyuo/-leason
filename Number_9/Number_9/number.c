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
//	//(-1)^0 * 1.001 * 2^3   ��e Ҫ��127�����Ķ������� ��MҪ��ȥͷ��1
//	//0 130�Ķ������� 00000000000000000001001;
//	//int  00000000 00000000 00000000 00001001;
//	float *pfloat = (float*)&n;
//	//float  0 00000000 00000000000000000001001;
//	// s=0; e= -127; m=
//	printf("%d\n", n);
//	printf("%f\n", *pfloat);  //����ͻ�����δ洢�Ķ��������ж��ɸ������洢
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
//	tear(arr); //����Ԫ�ص�ַ
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
//	char* p = "abcdef";  //�����ַ��ĵ�ַ��ŵ�p
//	printf("%c\n", *p);//%c��ӡһ���ַ�
//	printf("%s\n", p);
//	return 0;  
//}

//int main()
//{
//	char arr1[] = "abcdef"; // arr ��ʾ��ַ ��ַ��ͬ ���Դ�ӡlaji
//	char arr2[] = "abcdef";
//	char *p1 = "abcdef"; // �����ַ���  �����޸�i ��ʵֻ����һ�ݶ���
//	char *p2 = "abcdef"; //  p1��p2ָֻ��ͬһ����ַ
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
//	int* arr[4] = { &a, &b, &c, &d }; //ָ������ 
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
//	// arr - ��Ԫ�ص�ַ
//	// &ar[0] - ��Ԫ�ص�ַ
//	// &arr - �����ַ
//	int(*p)[10] = &arr;
//	//����ָ��
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

void print1(int arr[3][5], int x, int y) //ԭʼ���� �������������ʽ
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
void print2(int (*p)[5], int x, int y)  //������ָ�����ʽ
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{

			printf("%d ", *(*(p + i) + j)); //p+iָ�������� Ҳ������Ԫ�ص�λ��
		}       //�˴�����Ԫ���� �����
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	//arr - ������ - ��Ԫ�ص�ַ
	//���ڶ�ά���� ��Ԫ�ص�ַ�� 
	//�Ѷ�ά���������һά���� ��ֻ������Ԫ�� 
	print1(arr, 3, 5); //ԭʼ���� 
	print2(arr, 3, 5);
	return 0;
}

//int arr[5]  //һ���������� ���Ԫ��
//int *parr1[10]  //һ������ ʮ��Ԫ�� ������ int *,ָ������
//int(*parr2)[10]  //һ��ָ�� ָ��һ������ ����10��Ԫ�� ������int
//int(*parr3[10])[5]   //���� ʮ��Ԫ�� ÿ��Ԫ����һ������ָ�� ָ������������Ԫ�� ÿ��Ԫ����int

