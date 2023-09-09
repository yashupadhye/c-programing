// write a program to swap the give value
#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    printf("Afrer swaping\n");
    int temp = a;
    a = b;
    b = temp;
    printf("a=%d\n", a);
    printf("b=%d\n", b);
}
