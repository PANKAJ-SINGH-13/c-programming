#include <stdio.h>

int main() {
    int n;
    int first = 1, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("The first %d terms of the Fibonacci series are: ", n);

    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == 2) {
            // The first two terms are 1
            printf("1 ");
        } 
        
        else {
            next = first + second; // next term = sum of previous two
            printf("%d ", next);
            first = second;        // shift first to second
            second = next;         // shift second to next
        }
    }

    printf("\n");
    
    return 0;
}
