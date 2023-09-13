#include<stdio.h>
int main()
{
     int rows;
    printf("enter the row:-");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < (rows - i); j++)
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

