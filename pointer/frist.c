#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int *ptr1;
    int *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    printf(" value of a is %d\n", a);
    printf(" address of a is %u\n", &a); //%u is uesed for unsign int u this is use for  or it is use to print address
    printf(" value of ptr is %d\n", *ptr1);
    printf(" address of ptr is %d\n", &ptr1);
    printf("store address of ptr is %u\n\n\n", &ptr1);

    // value of b

    printf(" value od b is %d\n", b);
    printf(" address of b is %u\n", &b); 
    printf(" value of ptr is %d\n", *ptr2);
    printf(" address of ptr is %d\n", &ptr2);
    printf("store address of ptr is %u\n", &ptr2);
    return 0;
}