#include <stdio.h>
int main()
{
   int arr[] = {10, 20, 30, 40, 50, 60};
   int *p1;
   p1 = &arr[0];
   p1++;

   p1 = &arr[0];
   p1 = p1 + 2;
   p1 = p1 - 2;

   int *p2;
   p2 = &arr[2];

   printf("value of p1 is %d\n", *p1);
   printf("%d", (p2 - p1));

   if (p1 == p2)
   {
      printf("equal");
   }
   else
   {
      ("not equal");
   }

   return 0;
}