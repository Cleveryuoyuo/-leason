#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("####################################\n");
	printf("###### 1. add       2. del    ######\n");
	printf("###### 3. search    4. modify ######\n");//查找  改变
	printf("###### 5. show      6. sort   ######\n");//显示  排序
	printf("###### 0. exit      ################\n");//退出
	printf("####################################\n");
}

int main()
{
	int input = 0;
	//创建通讯录 （存放好友信息 1000个人的 还有记录已有元素的个数size）
	struct Contact con; 
	//初始化通讯录
	InitContact(&con);
	//
	do
	{
		menu();
		printf("请选择 :>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default :
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}