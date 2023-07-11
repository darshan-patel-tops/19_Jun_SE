#include<stdio.h>

union name
{
	int age;
	char name[101];
	float salary;
};
struct name1
{
	int age;
	char name[100];
	float salary;
};

int main()
{
	union name name_ka_object;
	printf("%ld",sizeof(union name));
	printf("\n%ld",sizeof(struct name1));
	
	
	
	
}