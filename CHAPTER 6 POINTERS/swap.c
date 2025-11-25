////// swap 2 numbers using call by reference


#include <stdio.h>

// Function definition
void swap(int *x, int *y) {
    int temp;
    temp = *x;   // store the value of x in temp
    *x = *y;     // put the value of y into x
    *y = temp;   // put the value of temp (original x) into y
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Function call - passing addresses of variables
    swap(&a, &b);

    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}

