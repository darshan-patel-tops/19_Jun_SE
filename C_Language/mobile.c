#include <stdio.h>
#include <string.h>

int main()
{
  char a[100] = "";
  char colour[100];
  char name[100];
  printf("Enter the Company of mobile: ");
  scanf("%99s", a);
  printf("The value of a is: %s\n", a);

  if (strcmp(a, "Apple") == 0)
  {
    printf("The Different Models are:\n Iphone 13\n Iphone 13 pro max\n Iphone 14\n Iphone 14 pro max\n");
    printf("Enter the Model Name: ");
    scanf("%99s", name);

    if (strcmp(name, "Iphone 13") == 0)
    {
      printf("Select the colours from below:\n Red\n Black\n White\n Green\n");
      printf("Enter the colour Name: ");
      scanf("%99s", colour);

      if (strcmp(colour, "Red") == 0)
      {
        printf("The Red colour is there in Iphone 13\n");
      }
      else if (strcmp(colour, "Black") == 0)
      {
        printf("The Black colour is there in Iphone 13\n");
      }
      else if (strcmp(colour, "White") == 0)
      {
        printf("The White colour is there in Iphone 13\n");
      }
      else if (strcmp(colour, "Green") == 0)
      {
        printf("The Green colour is there in Iphone 13\n");
      }
      else
      {
        printf("The entered colour is not in stock in Iphone 13\n");
      }
    }
    else if (strcmp(name, "Iphone 13 pro max") == 0)
    {
      printf("Select the colours from below:\n Red\n Black\n White\n Green\n");
      printf("Enter the colour Name: ");
      scanf("%99s", colour);

      if (strcmp(colour, "Red") == 0)
      {
        printf("The Red colour is there in Iphone 13 pro max\n");
      }
      else if (strcmp(colour, "Black") == 0)
      {
        printf("The Black colour is there in Iphone 13 pro max\n");
      }
      else if (strcmp(colour, "White") == 0)
      {
        printf("The White colour is there in Iphone 13 pro max\n");
      }
      else if (strcmp(colour, "Green") == 0)
      {
        printf("The Green colour is there in Iphone 13 pro max\n");
      }
      else
      {
        printf("The entered colour is not in stock in Iphone 13 pro max\n");
      }
    }
    else if (strcmp(name, "Iphone 14") == 0)
    {
      printf("Select the colours from below:\n Red\n Black\n White\n Green\n");
      printf("Enter the colour Name: ");
      scanf("%99s", colour);

      if (strcmp(colour, "Red") == 0)
      {
        printf("The Red colour is there in Iphone 14\n");
      }
      else if (strcmp(colour, "Black") == 0)
      {
        printf("The Black colour is there in Iphone 14\n");
      }
      else if (strcmp(colour, "White") == 0)
      {
        printf("The White colour is there in Iphone 14\n");
      }
      else if (strcmp(colour, "Green") == 0)
      {
        printf("The Green colour is there in Iphone 14\n");
      }
      else
      {
        printf("The entered colour is not in stock in Iphone 14\n");
      }
    }
    else if (strcmp(name, "Iphone 14 pro max") == 0)
    {
      printf("Select the colours from below:\n Red\n Black\n White\n Green\n");
      printf("Enter the colour Name: ");
      scanf("%99s", colour);

      if (strcmp(colour, "Red") == 0)
      {
        printf("The Red colour is there in Iphone 14 pro max\n");
      }
      else if (strcmp(colour, "Black") == 0)
      {
        printf("The Black colour is there in Iphone 14 pro max\n");
      }
      else if (strcmp(colour, "White") == 0)
      {
        printf("The White colour is there in Iphone 14 pro max\n");
      }
      else if (strcmp(colour, "Green") == 0)
      {
        printf("The Green colour is there in Iphone 14 pro max\n");
      }
      else
      {
        printf("The entered colour is not in stock in Iphone 14 pro max\n");
      }
    }
  }
  else
  {
    printf("Invalid\n");
  }

  return 0;
}
