//WRITE A PROGRAM TO PRINT THE SUM OF EVEN DIGITS OF A GIVEN NUMBER 

#include <stdio.h>

int main() {
    int n, d, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Handle negative input
    if (n < 0)
        n = -n;
        
        while (n > 0) {
        d = n % 10;        // extract the last digit
        if (d % 2 == 0)    // check if the digit is even
            sum = sum + d; // add even digit to sum
        n = n / 10;        // remove the last digit
    }

   
    printf("The sum of even digits is %d\n", sum);

    return 0;
}
