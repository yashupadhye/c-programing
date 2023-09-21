#include <stdio.h>
int main()
{
    int arr[5];
    int search = 6;
    int flag = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("enter the number:- ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == search)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }

    if (flag == 1)
    {
        printf("search number is present in array");
    }
    else
    {
        printf("search number is not present in array");
    }
    return 0;
}
