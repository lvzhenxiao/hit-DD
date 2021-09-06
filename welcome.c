#include <stdio.h>

int welcome()
{
        printf("***********************\n");	
        printf("*Welcome to hitdoudou!*\n");
        printf("*      1 eat          *\n");
        printf("*      2 sleep        *\n");
        printf("*      3 hitdoudou    *\n");
	printf("*      4 exit         *\n");
	printf("***********************\n");
        printf("*   please choose:    *\n");
	int ichoose;
        scanf("%d",&ichoose);
        return ichoose;
}
