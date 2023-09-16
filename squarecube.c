#include <stdio.h>
void calculater(int *square, int *cube, int n);
int main()
{
    int n = 4;
    int sqaure;
    int cude;
    calculater(n, &sqaure, &cube);
    return 0;
}
void calculater(int *sqaure, int *cube, int n)
{
    int sqaure = n * n;
    int cube = n * n * n;
}