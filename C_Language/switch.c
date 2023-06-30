#include<stdio.h>

int main()
{
    char ch;
    
    
    

    printf("Enter An Alphabet To See If It Is Vowel Or Constant:");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("%c is A Vowel",ch);
        break;
        
        case '+':
        	printf("Addition is 100");
        	break;
        default:
        printf("%c is A Constant",ch);
    }
}