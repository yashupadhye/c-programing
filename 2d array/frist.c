#include <stdio.h>
int main()
{

    int marks[3][10];
    for (int i = 0; i < 3; i++)
    {
        printf("enter the marks of std div %d\n ", i + 1);
        for (int j = 0; j < 10; j++)
        {
            printf("enter marks of std %d:", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("marks of div %d studends\n", i + 1);
        for (size_t j = 0; j < 10; j++)
        {
            printf(" %d ", marks[i][j]);
        }
        printf("\n");
    }

   // printf("%d\n",marks[0][0]);
   // printf("%d\n",marks[0][1]);
   // printf("%d\n",marks[0][2]);
   // printf("%d\n",marks[0][3]);
   // printf("%d\n",marks[0][4]);
   // printf("%d\n",marks[1][0]);
   // printf("%d\n",marks[1][1]);
   // printf("%d\n",marks[1][2]);
   // printf("%d\n",marks[1][3]);
   // printf("%d\n",marks[1][4]);

    return 0;
}