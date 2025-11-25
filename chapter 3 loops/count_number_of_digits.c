// WRITE A PROGRAM TO FIND THE NUMBER OF DIGITS IN A GIVEN NUMBER 

#include <stdio.h>

int main() {
    int n, count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    // Handle negative numbers
    if (n < 0)
        n = -n;

    // Special case for 0
    if (n == 0)
        count = 1;
    else {
        while (n > 0) {
            n = n / 10;
            count++;
        }
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
