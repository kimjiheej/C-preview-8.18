#include<stdio.h>
#include<string.h>
typedef struct {
	char name[20];
	int age;
	char address[100];
}Person;

int main(void)
{
	Person p1;
	strcpy(p1.name, "ȫ�浿");
	p1.age = 30;
	strcpy(p1.address, "����� ��걸 �ѳ���");

	
	printf("�̸�: %s\n", p1.name);
	printf("����: %d\n", p1.age);
	printf("�ּ�:%s\n", p1.address);





}