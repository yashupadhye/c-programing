#include <stdio.h>
int main()
{
    int x = 30;
    int *ptr;
    ptr = &x;
    printf(" value od x is %d\n", x);
    printf(" address of x is %u\n", &x); //%u is uesed for unsign int u this is use for  or it is use to print address
    printf(" value of ptr is %d\n", *ptr);
    printf(" address of ptr is %d\n", &ptr);
    printf("store address of ptr is %u\n",&ptr);
    return 0;
}