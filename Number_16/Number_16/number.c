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
// //memset zhi���Դ���char
//int main()
//{
//	char arr[11] = "";
//	memset(arr, '&', 10);
//	printf("%s\n", arr);
//	return 0;
//}

////  �ṹ������ ������int char ��
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
//}w, e, r;     // ȫ�ֽṹ�����
//struct std q; //ȫ�ֱ���
//int main()
//{
//	struct std s = { { 61.2 }, "zhangsan", "nan",18};//�ֲ��ṹ�����
//	printf("%f %s %s %d\n", s.pt.weight,s.name,s.sex,s.age);
//	return 0;
//}

// // typedef : �ض���
//struct stu
//{
//	char name[20];
//	struct stu* next;
//};
//int main()
//{
//	return 0;
//}

//// �ṹ�崫��
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
//	init(&s);  // �ı�ṹ������� �ô���ַ
//	print(s);
//	return 0;
//}

// ѧУ��ҵ
//��.1.ѡ��ṹ�������
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	printf("������������ ��> ");
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
//	printf("������һ������x :>");
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
//�����ò���while��
//int main()
//{
//	char ps = '0';
//	scanf("%c", &ps);
//	if (ps > 'c'&&ps < 'x')
//	{
//		printf("���ļ�������� : %c\n", (ps + 3));
//		printf("���Ľ�������� : %c\n", (ps - 3));
//	}
//	else if (ps <= 'c')
//	{
//		printf("���ļ�������� : %c\n", (ps + 3));
//		printf("��û�н������\n");
//	}
//	else
//	{
//		printf("��û�м������\n");
//		printf("���Ľ�������� : %c\n", (ps - 3));
//	}
//	return 0;
//}
//�� ���ж��Ƿ�Ϊ����
//int main()
//{
//	int a = 0;
//	int i = 0;
//	scanf("%d", &a);
//	for (i = 2; i < a; i++)
//	{
//		if (a%i == 0)
//		{
//			printf("����������\n");
//			return 0;
//		}
//	}
//	printf("��������\n");
//	return 0;
//}








