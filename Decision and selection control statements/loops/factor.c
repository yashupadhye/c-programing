#include <stdio.h>
int main()
{
    int num;
    printf("enter the interger:-");
    scanf("%d", &num);
    int factorical=1;
    for (int i = 1; i <= num; i++)
    {
      factorical=factorical*i;
}
printf("factorical:%d",factorical);
}