#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct _person//person ������ ��. 
{
	char name[20];
	int age;
	char address[100];
}person;
int main(void)
{

	person* p1 = malloc(sizeof(person));

	strcpy(p1->name, "ȫ�浿");
	p1->age = 30;
	strcpy(p1->address, "����� ��걸 �ѳ���");
	

	printf("�̸� :%s\n", p1->name);
	printf("����:%d\n", p1->age);
	printf("�ּ�:%s\n", p1->address);

	free(p1);








}