/*
   write a program to print even odd number between 1 to 10

*/
#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            printf("even number:-%d\n", i);
        }
        else
        {
            printf("odd number:-%d\n", i);
        }
        i++;
    }
    return 0;
}