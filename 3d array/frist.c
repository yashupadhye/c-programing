#include <stdio.h>
int main()
{
    int marks[2][3][4];
    //      {{10, 20, 45, 78}, {78, 25, 36, 46}, {89, 20, 30, 59}},
    //      {{56, 78, 96, 45}, {30, 69, 80, 58}, {78, 96, 30, 14}},
    //  };
    //  printf("%d",marks[1][0][1]);
    for (int i = 0; i < 2; i++)
    {
        printf("enter bmarks of deparment %d\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("enter marks of div %d\n", j + 1);
            for (int k = 0; k < 4; k++)
            {
                printf("enter the marks of student %d ", k + 1);
                scanf("%d", &marks[i][j][k]);
            }
        }
    }
     for (int i = 0; i < 2; i++)
    {
        printf(" marks of deparment %d\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf(" marks of div %d\n", j + 1);
            for (int k = 0; k < 4; k++)
            {
                
                scanf("%d", marks[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}