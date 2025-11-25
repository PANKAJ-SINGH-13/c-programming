// program to find great common divisor (recursion)

#include <stdio.h>

// Recursive function to find GCD
int gcd(int a, int b) {
    if (b == 0) {
        return a;  // Base case: when second number becomes 0
    }
     else {
        return gcd(b, a % b);  // Recursive call
    }
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}
