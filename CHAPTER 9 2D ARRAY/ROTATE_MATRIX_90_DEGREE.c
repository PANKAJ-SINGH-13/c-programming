#include <stdio.h>

int main() {
    int n;

    // Step 1: Take matrix size input (it must be square)
    printf("Enter size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n]; // Original matrix

    // Step 2: Take matrix elements as input
    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 3: Print the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Step 4: Transpose the matrix (swap across diagonal)
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Step 5: Reverse each row (to complete clockwise rotation)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - j - 1];
            matrix[i][n - j - 1] = temp;
        }
    }

    // Step 6: Print the rotated matrix
    printf("\nMatrix after 90° clockwise rotation:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
