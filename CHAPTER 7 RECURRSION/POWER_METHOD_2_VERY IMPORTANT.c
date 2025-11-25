// // MAKE A FUNCTION WHICH CALCULATES 'a' RAISED TO THE POWER 'b' USING RECURSION

#include <stdio.h>

int powerfunction(int a, int b) {
    if (b == 0)
        return 1;   // base case
    if (b == 1)
        return a;   // base case

    int temp = powerfunction(a, b / 2);  // compute once this reduces multiple calls and increases the speed of execution

    if (b % 2 == 0)      // exponent is even
        return temp * temp;
    else                  // exponent is odd
        return a * temp * temp;
}

int main() {
    int n, p;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter the power you want to raise: ");
    scanf("%d", &p);

    int c = powerfunction(n, p);

    printf("%d raised to the power %d is %d\n", n, p, c);

    return 0;
}
