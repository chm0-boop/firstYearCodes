#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    int choice = 0;
    int a, b, c, d;
    int sum, difference, product;
    float quotient;

    printf("*********************\n");
    printf("*   MAIN MENU       *\n");
    printf("* 1. ADDITION       *\n");
    printf("* 2. SUBTRACTION    *\n");
    printf("* 3. MULTIPLICATION *\n");
    printf("* 4. DIVISION       *\n");
    printf("* 5. EXIT           *\n");
    printf("*********************\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    while (choice != 5)
    {
        switch (choice)
        {
        case 1:
            system("cls");
            printf("Welcome to Addition\n\n");

            printf("Enter value for a: ");
            scanf("%d", &a);

            printf("Enter value for b: ");
            scanf("%d", &b);

            sum = a + b;

            printf("The sum of %d and %d is %d", a, b, sum);
            getch();

        case 2:
            system("cls");
            printf("Welcome to Subtraction\n\n");

            printf("Enter value for a: ");
            scanf("%d", &a);

            printf("Enter value for b: ");
            scanf("%d", &b);

            difference = a - b;

            printf("The difference of %d and %d is %d", a, b, difference);
        getch();

            case 3:
            system("cls");
            printf("Welcome to Product\n\n");

            printf("Enter value for a: ");
            scanf("%d", &a);

            printf("Enter value for b: ");
            scanf("%d", &b);

            product = a * b;

            printf("The product of %d and %d is %d", a, b, product);
            getch();

        case 4:
            system("cls");
            printf("Welcome to Qoutient\n\n");

            printf("Enter value for a: ");
            scanf("%d", &a);

            printf("Enter value for b: ");
            scanf("%d", &b);

            quotient = a / b;

            printf("The quotient of %d and %d is %.2f", a, b, quotient);
            getch();
            break;

        default:
            break;
        }

        system("cls");
        printf("*********************\n");
        printf("*   MAIN MENU       *\n");
        printf("* 1. ADDITION       *\n");
        printf("* 2. SUBTRACTION    *\n");
        printf("* 3. MULTIPLICATION *\n");
        printf("* 4. DIVISION       *\n");
        printf("* 5. EXIT           *\n");
        printf("*********************\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    }

    printf("Thank you! Come Again!");
    getch();
}
