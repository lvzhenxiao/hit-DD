#include <stdio.h>
#include <stdlib.h>

int choose()
{
        int k;
        k=welcome();
        switch(k)
        {
                case 1:
                        eat();
                        break;
                case 2:
                        sleep();
                        break;
                case 3:
                        hitdoudou();
                        break;
		case 4:
		        printf("You have left the game!\n");
			exit(0);
                default:
                        printf("please re-enter\n");
                        break;
        }
        return 0;
}
