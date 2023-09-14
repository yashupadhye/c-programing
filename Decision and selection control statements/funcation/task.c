#include <stdio.h>
/*write a progrm to caluculate square of a number entered by the number by the user
  1) by using function #calsquare
*/
int calsquare(int n);
int main()
{
    int number;
    printf("enter the number:-");
    scanf("%d", &number);
    int ans = calsquare(number);
    printf("square:%d", ans);
     return 0;
}
int calsquare(int n)

 {

    int result=n*n;
    return  result;
}
