#include<stdio.h>
#include<stdlib.h>
int main()
{
 int *ptr; 
 int num;

 printf("enter total  number element count:- ");
 scanf("%d",&num);
 ptr=(int*) malloc(num* sizeof(int));  
 printf("%d",*(ptr));
 for (int i = 0; i < num; i++)
 {
    printf("enter marks of std %d :",i+1);
    scanf("%d",ptr+i);
 }
 for (int i = 0; i < num; i++)
 {
    printf("marks of std %d :",i+1);
    printf("%d\n",*(ptr+i));
 }
 
  
}