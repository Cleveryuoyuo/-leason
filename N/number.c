#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>   //  �������� ָ��-ָ��  �õ������м�Ԫ�صĸ���
int main()
{
	int a = 999;
	int* pa = &a;
	printf("%p\n", *pa);
	int *p = NULL;  //null���ǿ�ָ�� ��ʼ��
}




//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i <= 12; i++)
//	{
//		*p = i;
//		p++;
//		//���� ֱ��*p++ ;
//	}
//	return 0;
//}


//int my_strlen(char* str)  //����ָ�����strlen
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int;
//	return 0;
//	printf("%d ", sizeof (pa));
//}


//int main()  //��������  ��ӡ���ֵ��и�forѭ��
//{
//	int arr1[] = { 1, 2, 3, 4, 7 };
//	int arr2[] = { 0, 9, 8, 6, 5 };
//	int i = 0;
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("arr1:");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("arr2:");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	
//	return 0;
//}


//void init(int arr[], int sz) //ʵ�������0-9
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//void reserve(int arr[], int sz)//ʵ������������
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void print(int arr[], int sz)//��ӡ���飡����
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//int main()
//{
//	int arr[10] = { 3, 5, 7, 1, 2, 8, 9, 0, 4, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	init(arr, sz);
//	print(arr, sz);
//	reserve(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//void buooleshort(int *arr, int sz)//ð�ݺ���
//{
//	for (int j = sz - 1; j >= 0; j--)
//	{
//		for (int i = 0; i + 1 <= j; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[5] = { 1, 5, 3, 7, 8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	buooleshort(arr, sz);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}