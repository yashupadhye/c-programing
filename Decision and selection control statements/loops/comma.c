#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i, j;
    for (i = 1, j = 10; i <= 10, j >=1; i++, j--)
        {
        printf("%d %d\n", i, j);
    }
}