#include <stdio.h>
void swapnumber(int a, int b);
int main()
{

    int a = 10, b = 20;
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    swapnumber(a, b);

    printf("a=%d\n", a);
    printf("b=%d\n", b);
}
void swapnumber(int a, int b)
{

    int temp = a;
    a = b;
    b = temp;
    printf("swap in the function\n");
    printf("a=%d\n", a);
    printf("b=%d\n", b);
}