#include <stdio.h>
int main()
{
    int mul[5];
    for (int i = 0; i < 5; i++)
        
    {
        printf("enetr the number:- ");
      
        scanf("%d\n", &mul[i]);
         mul[i]*=3;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",mul[i]);
    }
    
}