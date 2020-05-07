#define _CRT_SECURE_NO_WARNINGS 1

#define MAX 1000 
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include <stdio.h>
#include <string.h> 

enum Option  // ֱ��ʹ�ô���ɶ�������
{
	EXIT, // 0
	ADD,  //1
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT   // 6
};

// �û���Ϣ
struct PeoInfo  
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];  //סַ
};

// ͨѶ¼����
struct Contact
{
	struct PeoInfo data [MAX]; //���һ����Ϣ
	int size; // ���������¼����Ԫ�صĸ���
};

//��������
//��ʼ��
void InitContact(struct Contact* ps);
//1.����һ����Ϣ
void AddContact(struct Contact* ps);

//2.ɾ��һ���˵���Ϣ
void DelContact(struct Contact* ps);

//3.����ָ���������Ϣ
void SearchContact(const struct Contact* ps);
//4.�޸�һ���˵���Ϣ
void ModifyContact(struct Contact* ps);
//5.��ӡһ����Ϣ
void ShowContact(const struct Contact* ps);
//6.����
void SortContact(struct Contact* ps);