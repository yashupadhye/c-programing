#include <stdio.h>
void calculater(int n, int *sq, int *cb);
int main()
{
    printf("enter the number");
    int n;
    scanf("%d", &n);
    int square;
    int cube;
    calculater(n, &square, &cube);
    printf("sqaure:- %d\n", square);
    printf("cube:- %d\n", cube);
    return 0;
}
void calculater(int n, int *sq, int *cb)
{
    *sq = (n * n);
    *cb = (n * n * n);
}
