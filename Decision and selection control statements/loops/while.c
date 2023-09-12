#include <stdio.h>
int main()
{
    int i = 1;

    while (i <= 10)
    {
        printf("hellp world\n"); 
        i++;
    }
} int row;
      printf("How many row you want:-");
      scanf("%d",&row);
   for (int i = 0; i <row; i++)
   {
     for (int j = 0; j<=i; j++)
     {
        printf("*");
     }
     printf("\n");
   }