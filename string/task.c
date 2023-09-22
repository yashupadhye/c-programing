#include <stdio.h>
int main()
{
    char name[19];
    printf("enter your name:- ");
    // scanf("%c",name);
    // printf("%c",name);
    int i;
    for (int i = 0; i <=19; i++)
    {
        scanf("%c", &name[i]);
    }
    name[i] = '\0';
    int j = 0;
    while (name[j] != '\0')
    {
        printf("%c", name[j]);
        j++;
    }

    return 0;
}