#include <stdio.h>
int main()
{
    float a, b, c;
    char ch;
    printf("Enter the frist number:-");
    scanf("%f", &a);
    printf("Enter the choice you want to prefrom:-");
    scanf(" %c", &ch);
    printf("Enter the second number:-");
    scanf("%f", &b);
    switch (ch)
    {
    case '+': c=a+b;
        printf("output is:- %f", c);
        break;
    case '-': c=a-b;
        printf("output is:- %f" ,c);
        break;
    case '*': c=a*b;
        printf("output is:-%f",c);
        break;
        case '/': c=a/b;
        printf("outout is:-%f",c);
        break;
   
    }
}