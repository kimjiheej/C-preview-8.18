#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct person {
	char name[20];
	int age;
	char address[100];
};

int main(void)
{

	struct person p1;
	struct person* ptr;

	ptr = &p1;

	ptr->age = 30;
	printf("����: %d\n", p1.age);
	printf("����: %d\n", ptr->age);









}