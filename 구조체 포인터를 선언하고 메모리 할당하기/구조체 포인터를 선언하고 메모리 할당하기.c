#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct person {
	char name[20];
	int age;
	char address[100];
};
int main(void)
{

	struct person* p1 = malloc(sizeof(struct person));
  
	strcpy(p1->name, "ȫ�浿");
	p1->age = 30;
	strcpy(p1->address, "����� ��걸 �ѳ���");

	printf("�̸� :%s\n", p1->name);
	printf("����:%d\n", p1->age);
	printf("�ּ�:%s\n", p1->address);

	free(p1);









}