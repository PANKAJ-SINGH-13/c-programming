/// WRITE A PROGRAM TO PRINT THE FIBONACCI SERIES
////1,1,2,3,5,8,13,21,34...............
/// nth term = (n-1)th term + (n-2)th term


#include <stdio.h>

int main() {
    int n;
    int first = 1, second = 1, next;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 1 || n == 2) {
        // The first and second Fibonacci numbers are 1
    printf("The %dth term of the Fibonacci series is 1\n", n);
    }
    
    else {
        for (int i = 3; i <= n; i++) {
            next = first + second;  // calculate the next term
            first = second;         // shift first to second
            second = next; // shift second to next
            
            printf("%d\n",next);
    }
    

    }

    return 0;
}
