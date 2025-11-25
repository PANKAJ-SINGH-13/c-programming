#include <stdio.h>

int main() {
    int n;

    printf("Enter an odd number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number to obtain this pattern.\n");
        return 0;
    }

    int mid = n / 2 + 1;  // Middle row

    // Upper half of the diamond
    for (int i = 1; i <= mid; i++) {
        for (int j = 1; j <= mid - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (int i = mid - 1; i >= 1; i--) {
        for (int j = 1; j <= mid - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
