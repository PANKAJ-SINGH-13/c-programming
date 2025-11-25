// TAKE INPUTS FROM USER AND PRINT 2D ARRAY



#include <stdio.h>

int main() {
    int r, c;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int arr[r][c]; // Declare 2D array

    // Take input from user
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter number at index [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);  // ❌ Removed extra spaces in format string
        }
    }

    // Print the 2D array
    printf("\nThe 2D array is:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
