#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL) //��ӡ����ԭ��
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
//		printf("������ɼ�:>");
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
//	printf("�������� %d\n", n);
//	int m = hege_number(arr,n);
//	printf("�ϸ�������� %d\n", m);
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
//	printf("������ʮ������\n");
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
//�Ӽ�������10���������ú������ʵ�ּ��������ֵ����Сֵ�������������������е�λ�á�

//void GetMemory(char *p) //�β� ֮�ں����ڲ���Ч
//{
//	p = (char *)malloc(100);// �ڴ�й© û��free
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);  //��ֵ����
//	strcpy(str, "hello world");//���� P�뿪��������ʧ��
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//  ����
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

//��������  1.
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
	//������С
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








