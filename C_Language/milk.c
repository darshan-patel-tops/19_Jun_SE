#include<stdio.h>
int main()
{
	int milk=22;
	
	if(milk>=0 && milk<=10)
	{
		printf("1-10");
	}
	else if(milk>=11 && milk<=21)
	{
		printf("11-21");
	}
	else if(milk>=22 && milk<=31)
	{
		printf("22-31");
	}
	else
	{
		printf("invalid");
	}
	
}