#include <stdio.h>
int main()
{
    // convert the  one data type  to another data type
    // implicit is convert by complier
    int a = 10;
    int b = 20;
   float c = a + b;
    printf("%f\n",c);
    
    

    //explicit type casting
    float Result=(float)a;
    printf("%f\n",Result);

    // this is used to convert the char data type
   char cc='B';
   int result=(int)cc;
   printf("%d\n",result);

    

}
   