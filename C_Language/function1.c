#include<stdio.h>



int circle()
{
	float radius;
	float pi = 3.14;
	printf("Enter Radius\n");
	scanf("%f",&radius);
	printf("value is %f",pi*radius*radius);
}
int main()
{
	circle();
}