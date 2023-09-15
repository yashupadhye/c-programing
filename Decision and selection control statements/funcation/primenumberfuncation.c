#include <stdio.h>
int checkprime();
int main()
{
    int n,num;
    checkprime(n);
   
    return 0;
}
int checkprime()
{

    int i, num = 1, n;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            num = 0;
            break;
        }
    }
     if (num)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }
}
