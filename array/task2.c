#include <stdio.h>
int main()
{
    int rain[7];
    for (int i = 0; i < 7; i++)
    {
        printf("enter rainfall in mm:-");
        scanf("%d\n", &rain[i]);
    }
    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum += rain[i];
    }
    printf("avg:- %f", (float)sum / 7);
}