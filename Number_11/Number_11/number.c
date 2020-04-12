#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void prent(char *str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit\n");
//}
//int main()
//{
//	test(prent);
//	return 0;
//}



//int min_gbs(int x, int y)
//{
//	if (x>y)
//	{
//		if ((x%y) != 0)
//		{
//			return x*y;
//		}
//		else
//		{
//			return x;
//		}
//	}
//	else if (x<y)
//	{
//		if ((y%x) != 0)
//			return y*x;
//		else
//			return y;
//	}
//	else
//		return x;
//}
//int main()
//{
//	int A = 0;
//	int B = 0;
//	scanf("%d %d", &A, &B);
//	printf("最小公倍数:%d\n", min_gbs(A, B));
//	return 0;
//}