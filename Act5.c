#include <stdio.h>
int main()
{
    int number = 0;

    printf("Enter values between 1-5: ");
    scanf("%d", &number);

    if (number == 1)
    {
        printf("You selected #1");
    }
    else if (number == 2)
    {
        printf("Welcome to #3");
    }
    else if (number == 3)
    {
        printf("Hello World");
    }
    else if (number == 4)
    {
        printf("All for one, One for all");
    }
    else if (number == 5)
    {
        printf("Thank You!");
    }
    else
    {
        printf("Invalid");

        return 0;
    }
}