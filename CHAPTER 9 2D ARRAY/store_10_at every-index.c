// write a program to store 10 at every index of a 2d matrix with 5 rows abd 5 columns

#include <stdio.h>

int main() {
    int arr[5][5]; // Declare a 5x5 matrix

    // Store 10 at every index
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = 10;
        }
    }

    // Print the matrix
    printf("The 5x5 matrix filled with 10 is:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
