#include<stdio.h>

int main()
{
	
	/*
	Logical Operators
	1 AND &&
	2 OR || 
	3 NOT !
	
	1    AND     AND    Result
		True	True	True
		True	False 	False
		False	True 	False
		False 	False 	False
	
	2   OR	OR	Result
		T	T	T
		T	F	T
		F 	T 	T
		F	F 	F
		
	3	Not Result
		T	F
		F	T
	*/
	int marks;
	
	printf("enter Your Marks: ");
	scanf("%d",&marks);
//	printf("%d value is :",marks);
	
	if(marks>=0 && marks<=33)
	{
		printf("Fail");
	}
	else if(marks>=34 && marks<=50)
	{
		printf("Second Class");
	}
	else if(marks>=51 && marks<=80)
	{
		printf("first class");
	}
	else if(marks>=81 && marks<=100)
	{
		printf("Distinction");
	}
	else
	{
		printf("Apsara ke extra marks nai milte");
	}
}