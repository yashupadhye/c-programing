#include <stdio.h>
void rainfllow(int arr[]);
int main()

{   
     int rain[5];

    rainfllow(rain);
    return 0;
}
void rainfllow(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}