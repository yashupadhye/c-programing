#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="yash sandeep upadhye";
    char s2[12];
    int i=0;
    while (s1[i] !='\0')
    {
        s2[i]=s1[i];
        i++;
       
    }
     s2[i]='\0';
        puts(s2);
    
}