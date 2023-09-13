#include <stdio.h>
int main()
{
    /* for (int i = 1; i <= 5; i++) // upper loop
      {
          for (int j = 1; j <= 3; j++) // inner loop
          {
              printf(" yash%d\n",j);

          }
          printf("\n");

      }
      */
    /* int row;
     printf("How many row yor want:-");
     scanf("%d", &row);
     for (int i = 0; i<=row; i++)
     {
         for (int j = 0; j <= i; j++)
         {
             printf("*");

         }
         printf("\n");

     }
     */
    // c program to print left half pyramid pattern of numbers

    int rows;
    printf("enter the row:-");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < 2 * (rows - i) - 2; j++)
        {
            printf(" ");
        }

        for (int k = 0; k <= i; k++)
        {
            printf("* ", k + 1);
        }
        printf("\n");
    }
    return 0;
}
