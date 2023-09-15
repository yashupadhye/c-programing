#include <stdio.h>
void swapnumber(int *a, int *b);
int main()
{

    int a = 10, b = 20;
    printf("before swapping\n");
    printf("a=%d\n", a);
    printf("b=%d\n", b);

    swapnumber(&a, &b);
    printf("after swapping\n");
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    return 0;
}
void swapnumber(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
    printf("swap in the function\n");
    printf("a=%d\n", *a);
    printf("b=%d\n", *b);
}