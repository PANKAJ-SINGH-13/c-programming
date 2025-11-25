// WRITE A PROGRAM TO PRINT THE SUM OF DIGITS OF A GIVEN NUMBER 

#include <stdio.h>

int main() {
    int n, d, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Handle negative input
    if (n < 0)
        n = -n;

    while (n > 0) {
        d = n % 10;
        sum = sum + d;
        n = n / 10;
    }
 printf("The sum of digits is %d\n", sum);

 return 0;
}
