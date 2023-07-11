#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	printf("Enter your name:");
	gets(name);
	printf("name= %s",name);
	
//	printf("\n uppercase=%s",strupr(name));
//	printf("\n lowercase=%s",strlwr(name));
	printf("\n length= %d",strlen(name));
}