#include<stdio.h>
int main()
{
	int marks;
	printf("enter your marks: ");
	scanf("%d",&marks);
	
	if(marks>=0 && marks<=33)
	{
		printf("fail");
	}
	
	else if(marks>=34 && marks<=60)
	{
		printf("pass");
	}
	
	else if(marks>=61 && marks<=100)
	{
		printf("first division");
	}
	
//	else
}