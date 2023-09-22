#include <stdio.h>
int main()
{
    char name[] = "seed";
    // printf("enter your name:- ");
    // scanf("%c",name);
    // printf("%c",name);
    int i;
    for (int i = 0; i < 4; i = i + 2)
    {

        printf("%c", name[i]);
    }
}