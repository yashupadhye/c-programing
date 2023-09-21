#include <stdio.h>
void printmarks(int arr[]);
int main()
{
    int marks[] = {10, 45, 78, 90, 80};
   printmarks(marks);
}
void printmarks(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}