#include <stdio.h>
void ascci(char ch);
int main()
{
    char ch;
    printf("enter the charater:-");
    scanf("%c", &ch);

     ascci(ch);
    return 0;
}
void ascci(char c)
{

    printf("%d\n", (int)c);
   
}