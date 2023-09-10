#include<stdio.h>
int main()
{
    for (int i = 0; i < 10; i++)
      
        if (i==5 || i==8)
        {
            continue;  //this is use for to skip the value
        }
          printf("%d\n",i);
    }
    