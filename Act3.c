#include <stdio.h>

int main() {
    int num;

    // Ask the user for a number
    printf("Enter a number between -100 and 100: ");
    scanf("%d", &num);

    //Check if the number is within the valid range 
    if (num < -100 || num > 100) {
        printf("Out of bounds\n");
    }else {
        // Determine if the number is even or odd
        if (num % 2== 0) {
            printf("The number %d is EVEN. \n", num);
        } else {
            printf("The number %d is ODD. \n , num");
        }
    }
    return 0;
}