#define _CRT_SECURE_NO_WARNINGS 1

#define MAX 1000 
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include <stdio.h>
#include <string.h> 

enum Option  // 直接使得代码可读性增高
{
	EXIT, // 0
	ADD,  //1
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT   // 6
};

// 用户信息
struct PeoInfo  
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];  //住址
};

// 通讯录类型
struct Contact
{
	struct PeoInfo data [MAX]; //存放一个信息
	int size; // 这个用来记录已有元素的个数
};

//声明函数
//初始化
void InitContact(struct Contact* ps);
//1.增加一个信息
void AddContact(struct Contact* ps);

//2.删除一个人的信息
void DelContact(struct Contact* ps);

//3.查找指定人物的信息
void SearchContact(const struct Contact* ps);
//4.修改一个人的信息
void ModifyContact(struct Contact* ps);
//5.打印一个信息
void ShowContact(const struct Contact* ps);
//6.排序
void SortContact(struct Contact* ps);