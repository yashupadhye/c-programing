#include<stdio.h>
int dowork(int arr[]);
int main()
{
    int arr[]={10,20,30,40,50,60,70};
    printf("avg:%d",dowork(arr));
    
    return 0;
}
int dowork(int arr[]){
    int sum =0;
    for (int  i = 0; i < 7; i++)
    {
        sum+=arr[i];
    }
    return(sum/7);
    
}