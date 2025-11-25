// FACTORIAL OF A GIVEN NUMBER USING RECURSION 

#include <stdio.h>

// Recursive function to find factorial
int factorial(int n) {
    if (n == 0 || n == 1) {  // base case
        return 1;
    } 
    else {
        return n * factorial(n - 1);  // recursive case
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int fact = factorial(n);
        printf("Factorial of %d = %d\n", n, fact);
    }

    return 0;
}
