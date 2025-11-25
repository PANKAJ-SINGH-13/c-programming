//// write a program to print the transpose of a matrix           LEET CODE 867

#include <stdio.h>

int main() {
    int r, c;

    // Take size of matrix from user
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int arr[r][c];       // Original matrix
    int transpose[c][r]; // Transposed matrix

    // Take input from user
    printf("\nEnter elements of the matrix (%d x %d):\n", r, c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Compute transpose
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    // Display original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // Display transpose
    printf("\nTranspose of the Matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
