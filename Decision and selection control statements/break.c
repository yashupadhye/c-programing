#include <stdio.h>
int main()
{
    /* for (int i = 0; i < 10; i++)
     {
         printf("%d\n",i);
         if (i==7)
         {
             break;
         }

     }
     */
    while (1)
    {
        printf("enter 1 to print:-\nenter the 2 to print:-\n");
        int choice;
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("doing work\n");
        }
        else if (choice == 2)
        {
            break;
        }
        else
        {
            printf("inviaid choice\n");
        }
    }
}
//write a prime number using loops and break