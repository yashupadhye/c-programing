#include <stdio.h>
int main()
{

    float a, b, c;
    char ch;
      while (1)
    {
    printf("Enter the frist number= \n");
    scanf("%f", &a);
    printf("Enter the choice you want to preform= ");
    scanf(" %c", &ch);
    printf("Enter the second number= ");
    scanf("%f", &b);
  

        switch (ch)
        {
        case '+':
            c = a + b;
            printf("output is:- %f\n", c);
            break;
        case '-':
            c = a - b;
            printf("output is:- %f\n", c);
            break;
        case '*':
            c = a * b;
            printf("output is:-%f\n", c);
            break;
        case '/':
            c = a / b;
            printf("outout is:-%f\n", c);
            break;
       
        default:
            printf("invaild input\n");
        }
    }
}