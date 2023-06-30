#include<stdio.h>

int main()
{
	int marks;
	
	printf("Enter Marks");
	scanf("%d",&marks);
	
	if(marks>=0)
	{
		if(marks<=33)
		{
			printf("fail");
		}
		if(marks>=34 && marks<=49)
		{
			printf("pass");
		}
		if(marks>=50 && marks<=79)
		{
			printf("first class");
		}
		if(marks>=80 && marks<=100)
		{
			printf("distinction dclass");
		}
	}
}