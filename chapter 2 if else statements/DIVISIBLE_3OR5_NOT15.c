////TAKE INTEGER AS INPUT AND TELL WHETHER IT IS DIVISIBLE BY 3 or 5 BUT NOT 15

#include <stdio.h>

int main() {
    int l;

    printf("Enter your number: ");
    scanf("%d", &l);

    if ((l % 3 == 0 || l % 5 == 0) && l % 15 != 0) {
        printf("Your number is divisible by 3 or 5 but not by 15.\n");
    }
    else {
        printf("Your number does not meet the condition.\n");
    }

    return 0;
}