#include <stdio.h>
int main()
{
    int marks;
    printf("enter the marks");
    scanf("%d", &marks);
    if (marks >= 60)
    {
        printf("you are eligible");
    }
    else
    {
        printf("you are not eligible");
    }
    return 0;
}