#include <stdio.h>
// void dowork(int arr[]);
int main()
{
    int arr[] = {10, 20, 10, 40, 10, 60, 10};
    printf("defult pointing address of arr is %u\n", arr);
    printf("pointing address of arr is %u\n", (arr + 1));
    printf("pointing value of arr is %d\n", *(arr + 2));

    //    int counter = 0;
    //
    //    dowork(arr);
    //    return 0;
    //}
    // void dowork(int arr[])
    //{
    //    for (int i = 0; i <7; i++)
    //    {
    //        if (arr[i] == 10)
    //        {
    //            arr[i] = 0;
    //        }
    //    }
    //
    //    for (int i = 0; i < 7; i++)
    //    {
    //        printf("%d\n", arr[i]);
    //    }
}