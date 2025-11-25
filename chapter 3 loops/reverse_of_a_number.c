//WRITE A PROGRAM TO PRINT THE REVERSE OF A GIVEN NUMBER 

#include <stdio.h>

int main() {
    int n, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n >= 0) {
        
    remainder = n % 10;               // get the last digit
    reverse = reverse * 10 + remainder; // build the reversed number
    n = n / 10;                       // remove the last digit
    }

    printf("Reversed number = %d", reverse);

    return 0;
}




////IF WE WANT OUR NUMBER TO START FROM 0 (ZERO).

#include <stdio.h>
#include <string.h>

int main() {
    char num[50];
    int i, length;

    printf("Enter a number: ");
    scanf("%s", num);  // read as string

    length = strlen(num);

    printf("Reversed number = ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", num[i]);  // print each character in reverse
    }

    return 0;
}




