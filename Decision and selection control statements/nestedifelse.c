#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your mark\n");
    scanf("%d", &marks);

    if (marks >= 80)
    {
        printf("you are eligible  to get gift\n");
        int choice;
        printf("Enter choice to get a gift");
        scanf("%d", &choice);
        if (choice == 1 || choice == 2 || choice == 3)
        {
            printf("congratulation");
        }
        else
        {
            printf("Best time next time.......");
        }
    }
    else
    {
        printf("sorry!! you are not eligibile for gift");
    }
}