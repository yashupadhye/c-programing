#include <stdio.h>
void yash();
int main()

{
    yash();
    yash();
    yash();
    yash();

    return 0;
}
void yash()
{
    int factorical = 1, num;
    printf("enter the number:-");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        factorical = factorical * i;
        printf("factorical=%d\n", factorical);
    }
}
