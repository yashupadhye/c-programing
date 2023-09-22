#include <stdio.h>
#include <string.h>
void getname(char fname[]);
void dispname(char fname[]);
int main()
{
    char fname[100];

    getname(fname);
    dispname(fname);

    return 0;
}
void getname(char fname[])
{

    printf("enter your name:- ");
    gets(fname);
}
void dispname(char fname[])
{
    puts(fname);
}