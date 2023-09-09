#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:-");
    scanf("%d",&num);
    if ((num >= 1 && num <= 100))
    {
        printf("the given number is in range");
    }else{
        printf("the given number is not in range");
    }
    return 0;
}