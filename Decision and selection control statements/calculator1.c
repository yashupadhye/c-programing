#include <stdio.h>
int main()
{
   int oldResult = 0;
   while (1)
   {
      int choice;
      printf("1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n5. Exit\nEnter your choice : ");
      scanf("%d", &choice);

      int num1, num2, result;
      if (choice == 1)
      {
         printf("1. Perform fresh operation\n2. Perform operation on previous result\nEnter your choice : ");
         int choice1;
         scanf("%d", &choice1);
         if (choice1 == 1)
         {
            printf("Enter first number : ");
            scanf("%d", &num1);
            printf("Enter second number : ");
            scanf("%d", &num2);

            result = num1 + num2;
            oldResult = result;
            printf("%d + %d = %d\n", num1, num2, result);
         }
         else
         {
            printf("Enter number : ");
            scanf("%d", &num1);
            result = oldResult + num1;
            printf("%d + %d = %d\n", oldResult, num1, result);
            oldResult = result;
         }
      }
      else if (choice == 2)
      {
         printf("1. Perform fresh operation\n2. Perform operation on previous result\nEnter your choice : ");
         int choice1;
         scanf("%d", &choice1);
         if (choice1 == 1)
         {
            printf("Enter first number : ");
            scanf("%d", &num1);
            printf("Enter second number : ");
            scanf("%d", &num2);

            result = num1 - num2;
            oldResult = result;
            printf("%d - %d = %d\n", num1, num2, result);
         }
         else
         {
            printf("Enter number : ");
            scanf("%d", &num1);
            result = oldResult - num1;
            printf("%d - %d = %d\n", oldResult, num1, result);
            oldResult = result;
         }
      }
      else if (choice == 3)
      {
         printf("1. Perform fresh operation\n2. Perform operation on previous result\nEnter your choice : ");
         int choice1;
         scanf("%d", &choice1);
         if (choice1 == 1)
         {
            printf("Enter first number : ");
            scanf("%d", &num1);
            printf("Enter second number : ");
            scanf("%d", &num2);

            result = num1 * num2;
            oldResult = result;
            printf("%d * %d = %d\n", num1, num2, result);
         }
         else
         {
            printf("Enter number : ");
            scanf("%d", &num1);
            result = oldResult * num1;
            printf("%d * %d = %d\n", oldResult, num1, result);
            oldResult = result;
         }
      }
      else if (choice == 4)
      {
         printf("1. Perform fresh operation\n2. Perform operation on previous result\nEnter your choice : ");
         int choice1;
         scanf("%d", &choice1);
         if (choice1 == 1)
         {
            printf("Enter first number : ");
            scanf("%d", &num1);
            printf("Enter second number : ");
            scanf("%d", &num2);

            result = num1 / num2;
            oldResult = result;
            printf("%d / %d = %d\n", num1, num2, result);
         }
         else
         {
            printf("Enter number : ");
            scanf("%d", &num1);
            result = oldResult / num1;
            printf("%d / %d = %d\n", oldResult, num1, result);
            oldResult = result;
         }
      }
      else if (choice == 5)
      {
         break;
      }
      else
      {
         printf("Please enter a valid choice\n");
      }
   }

   return 0;
}