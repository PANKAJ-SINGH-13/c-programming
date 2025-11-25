////Write a program using goto to repeat until a positive number is entered
#include <stdio.h>

int main() {
    int number;

start:  // label 
    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Invalid input. Please try again.\n");
        goto start;  
    }

    printf("You entered a positive number: %d\n", number);

    return 0;
}
