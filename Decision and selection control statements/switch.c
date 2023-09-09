/*
the syntax of switch is:
    switch(expression)
    {
     case value1:
         statement;
         break;
     case value2:
         statement;
         break;
     default:
         statement;
         break;
    }

*/
#include <stdio.h>
int main()
{
    int marks;
    printf("enter your marks:-");
    scanf("%d", &marks);

    switch (marks)
    {
    case 40:
        printf("passed");
        break;
    case 60:
        printf("frist class");
        break;
    case 75:
        printf("with distiction");
        break;

    default:
        printf("invaild marks");
        break;
    }
 return 0;
}