#include<stdio.h>
int main()
{
     /*Ternary operators syntax
    syntax
    (condition)?(true):(flase);
    */
    int age;
    printf("Enter the age");
    scanf("%d",&age);
    (age == 18) ? (printf("your age is 18")) : (printf("your age is not 18"));
    return 0;
}