#include<stdio.h>
int num(n)
{	
char email[50];
	char pass[50];
	if(n>0)
	{	
		printf("\n\nEnter email : ");
		scanf("%s", &email);
//		gets(email);
		printf("\nEnter pass : ");
		scanf("%s", &pass);	
		printf("\n%s \n%s", email, pass);
		num(n-1);	
		}
	else {
		printf("\n\nall inputs recieved \n");	}}
int main()
{	int n;
	printf("Banking Login Details \n\nNumber of persons to enter details of : ");
	scanf("%d", &n);
	num(n);}
	