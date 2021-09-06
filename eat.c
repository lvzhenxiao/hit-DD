#include <stdio.h>
#include <stdlib.h>

int eat()
{
  while(1)
  {
     printf("****************************\n");
     printf("*Welcome to xiaohui fanzhuo*\n");
     printf("*     1-Fish               *\n");
     printf("*     2-rice               *\n");
     printf("*     3-apple              *\n");
     printf("*     4-return             *\n");
     printf("****************************\n\n");
     int c;
     static int e=0;
     printf("Please enter the choose you want to eat:");
     scanf("%d",&c);
     switch(c)
     {
        case 1:
        {
	   printf("\n\nYou ate a fish!\n\n");
           printf("\nYour growth value has increased by 5 points!\n\n");
           printf("\nYour current energy level is %d\n\n",e+=5);
        }
	break;
        case 2:
        {
	   printf("\n\nYou ate a bowl of rice!\n\n");
           printf("\nYour growth value has increased by 10 points!\n\n");
           printf("\nYour current energy level is %d\n\n",e+=10);
	}
        break;               
        case 3:
	{
	   printf("\n\nYou had an apple!\n\n");
           printf("\nYour growth value has increased by 8 points!\n\n");
           printf("\nYour current energy level is %d\n\n",e+=8);
        }
        break;
        case 4:
        return 0;
        default:
           printf("\n\nplease re-enter:\n\n");
        break;
        }
    }
}
