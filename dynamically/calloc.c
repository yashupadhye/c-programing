#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr;
int num;
printf("enter a marksof  student count");
scanf("%d", &num);
//ptr=(int*) malloc(num * sizeof(int));
ptr=(int*) calloc(num,sizeof(int));
for(int i=0;i<num;i++)
{
    printf("enter total number of std %d=", i+1);
    scanf("%d", ptr+i);
}
for(int i=0;i<num;i++)
{
    printf("marks of standard %d :", i+1);
    printf("%d\n", *(ptr+i));
}
    int num1;
    printf("Enter additional no:\n");
    scanf("%d",&num1);
    ptr=(int*) realloc(ptr,(num+num1)*sizeof(int));
    for(int i=num;i<num+num1;i++)
{
    printf("enter total number of std %d=", i+1);
    scanf("%d", ptr+i);
}
for(int i=0;i<num+num1;i++)
{
    printf("marks of standard %d :", i+1);
    printf("%d\n", *(ptr+i));

}
{
    printf("rest of code" );
}

}