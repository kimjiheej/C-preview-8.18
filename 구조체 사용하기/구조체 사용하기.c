#include<stdio.h>
#include<string.h>
struct Person {
	char name[20];
	int age;
	char address[100];
}p1;//�ѹ��� ���� �����ϱ�.
int main(void)
{
	
	
	strcpy(p1.name, "ȫ�浿");
	p1.age = 30;
	strcpy(p1.address, "����� ��걸 �ѳ���");

	printf("�̸�: %s\n", p1.name);
	printf("����: %d\n", p1.age);
	printf("�ּ�:%s\n", p1.address);








}