#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//int main()
//{
//	{
//		int tmp = 0;
//		printf("tmp=%d\n", tmp);
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	printf("%d ", c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);
//	}
//	return 0;
//}




//int main()  //strcpy --  ԭʼ�Ŀ���
//{
//	char arr1[] = "##########";
//	char arr2[] = "nishizhu";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//void my_strcpy(char* dest, char* str)
//{
//	while (*str != '\0')  //�Լ����õ�copy_1
//	{
//		*dest = *str;
//		*dest++;
//		*str++;
//	}
//	*dest = *str;
//}

//void my_strcpy(char* dest, char* str)
//{
//	while (*dest++=*str++)    //�Լ����õ� copy_2
//	{
//		;
//	}
//}


//void my_strcpy(char* dest, char* str)
//{
//	while (*dest++ = *str++)    //�Լ����õ� copy_2
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "nishizhu";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//}



//struct /*�ṹ��ؼ���*/  stu    /*�ṹ���ǩ*/
//{
//	char name[20];
//	short age;
//	char tele[12];   //����ṹ������ ��ռ�ÿռ�
//	char sex[5];
//}s1,s2,s3;



// typedef struct /*�ṹ��ؼ���*/  stu    /*�ṹ���ǩ*/
//{
//	char name[20];
//	short age;
//	char tele[12];   //����ṹ������ ��ռ�ÿռ�
//	char sex[5];
//}stu;
//int main()
//{
//	stu s1 = {"����",20,"13028406684","��"};  //s �Ǵ����ṹ�����
//	stu s2;
//	return 0;
//}

//struct s      //�߼��ṹ��
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct t
//{
//	char ch[10];
//	struct s s;
//	char *pc;
//};
//int main()  //Ƕ�׽ṹ��
//{
//	struct t t = { "hehe", {100,'w',"hello world",3.14}, NULL };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);  //t �ǽṹ���ǩ��pc�ǳ�Ա����.�ҳ�Ա
//	return 0;
//}


// typedef struct /*�ṹ��ؼ���*/  stu    /*�ṹ���ǩ*/
//{
//	char name[20];
//	short age;
//	char tele[12];   //����ṹ������ ��ռ�ÿռ�
//	char sex[5];
//}stu;
// void print1(stu s)
// {
//	 printf("name:%s\n", s.name);  //.�����ҽṹ�����
//	 printf("age:%d\n", s.age);
//	 printf("tele:%s\n", s.tele);
//	 printf("sex:%s\n", s.sex);
// }
// void print2(stu* ps)
// {
//	 printf("name:%s\n", ps->name);  //ָ���ӡ �ü�ͷ ->
// }
//int main()
//{
//	stu s = {"����",20,"13028406684","��"};  //s �Ǵ����ṹ�����
//	//��ӡ�ṹ�����ݴ����� ��ַ�Ƚṹ�����Щ
//   //��Ϊ ����������Ҫѹջ������ṹ�������󣬲���ѹջϵͳ�����������½�
//	print1(s);
//	print2(&s);
//	return 0;
//}

//int ADD(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = ADD(a, b);
//	printf("%d ", ret);
//}