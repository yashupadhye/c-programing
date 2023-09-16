#include <stdio.h>
void swapnumber(int *a, int *b);
int main()
{
    int a = 30;
    int b = 50;

    printf("before swapping\n");
    printf("a=%d\n", a);
    printf("b=%d\n", b);

    swapnumber(&a, &b);
  

    printf("before swapping\n ");
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    return 0;
}
void swapnumber(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    printf("after the swap:-\n");
    printf("a=%d\n", *a);
    printf("b=%d", *b);
}