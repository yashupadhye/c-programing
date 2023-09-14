/*
write a progrom to find out max number
by using function #findmax
take  input of two number bythe user
return ma */
#include <stdio.h>
int findmax(int n1, int n2);
int main()
{
    int num1, num2;
    printf("enter the number:-\n");
    printf("enter the second number:-\n");
    scanf("%d%d", &num1, &num2);

    int max = findmax(num1, num2);
    printf("max number:-%d", max);
    return 0;
}
int findmax(int n1, int n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}
