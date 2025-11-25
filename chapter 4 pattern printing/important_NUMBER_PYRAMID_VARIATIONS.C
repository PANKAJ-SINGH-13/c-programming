/* print the given pattern
   1
  121
 12321
1234321
                      */

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        // Print spaces
        for (int j = 1; j <= (n - i); j++) {
            printf(" ");
        }

        // Print increasing numbers
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }

        // Print decreasing numbers
        for (int l = i - 1; l >= 1; l--) {
            printf("%d", l);
        }

        printf("\n");
    }

    return 0;
}
