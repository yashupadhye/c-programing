#include <stdio.h>

void multiplicationTable(int num);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    multiplicationTable(num);
    multiplicationTable(num);
    multiplicationTable(num);
    multiplicationTable(num);
    return 0;
}

void multiplicationTable(int num)
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}
