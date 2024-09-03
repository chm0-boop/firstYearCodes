#include <stdio.h>

int main()
{
    int number = 0;
    int a = 0, b = 0;
    int sum = 0;
    int difference = 0;
    int product = 0;
    double quotient = 0;

    printf("Enter number from 1-4: ");
    scanf("%d", &number);

    if (number == 1)
    {
        printf("Enter number for a; ");
        scanf("%d", &a);

        printf("Enter number for b:");
        scanf("%d", &b);

        sum = a + b;
        printf("a = %d, b = %d, sum = %d\n", a, b, sum);
    }
    else if (number == 2)
    {
        printf("Enter number for a; ");
        scanf("%d", &a);

        printf("Enter number for b:");
        scanf("%d", &b);

        difference = a - b;
        printf("a = %d, b = %d, difference = %d\n", a, b, difference);
    }
    else if (number == 3)
    {
        printf("Enter number for a; ");
        scanf("%d", &a);

        printf("Enter number for b:");
        scanf("%d", &b);

        product = a * b;
        printf("a = %d, b = %d, product = %d\n", a, b, product);
    }
    else if (number == 4)
    {
        printf("Enter number for a; ");
        scanf("%d", &a);

        printf("Enter number for b:");
        scanf("%d", &b);

        quotient = a / b;
        printf("a = %.2lf, b = %.2lf, quotient = %.2lf\n", a, b, quotient);
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}