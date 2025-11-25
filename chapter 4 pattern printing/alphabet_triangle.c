/* print the given pattern
A  
AB
ABC        
ABCD      */

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of letters: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
