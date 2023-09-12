#include<stdio.h>
#include<stdlib.h>
int main()
{
     printf("enter 1 to do some work:-\n enter2 to exit:-");
    int choice;
   
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("doing work");
        break;
    case 2:
       exit(0);
        break;
   

    default:
        printf("invaild marks");
        break;
    }
    printf("rest code");
 return 0;
}
