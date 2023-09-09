
// this are Arithmetic operators
#include <stdio.h>
int main()

{ 
     int n1 = 20;
     int n2 = 5;
     int add = n1 + n2;
     int sub = n1 - n2;
     int div = n1 / n2;
     int remider = n1 % n2;
     int mul = n1 * n2;

     printf("addition of two number:-%d\n", add);
     printf("substraction of two number:-%d\n", sub);
     printf("division of two number:-%d\n", div);
     printf("remider of two number is:-%d\n", remider);
     printf("multipication if two number:-%d\n", mul);
     
     

    /*Ternary operators syntax
    syntax
    (condition)?(true):(flase);
    */
    int age = 18;
    (age == 18) ? (printf("your age is 18")) : (printf("your age is not 18"));
    return 0;
}