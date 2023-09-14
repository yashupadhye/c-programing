#include <stdio.h>
// function pototype
void factorial(int num);
int main()
{
    int num;
    printf("enter the mumber:-");
    scanf("%d", &num);
    factorial(num);
    
    return 0;
}
void factorial(int num)
{
    int fact = 1;
     for (int i = 1; i <=num ; i++)
    {
        fact=fact*i;

    }
    printf("%d\n",&fact);
}