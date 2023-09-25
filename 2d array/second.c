#include<stdio.h>
int main()
{
    char stdname[5][20];
       
    for (int i = 0; i < 5; i++)
    {
    printf("enter name:-");
    gets(stdname[i]);
    };
     for (int i = 0; i < 5; i++)
    {
    puts(stdname[i]);
    };
    
    
}