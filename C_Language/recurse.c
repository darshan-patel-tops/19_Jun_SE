#include<stdio.h>


int sum(int a)
{
	if(a>0)
	{	
	printf("%d\n",a);
	printf("Called sum funciton \n");
	sum(a-1);
	}
}
int main()
{
	int i;
	printf("Enter how many time you want to call recursive");
	scanf("%d",&i);
	sum(i);
}