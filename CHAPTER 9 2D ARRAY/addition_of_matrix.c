// write a program to add to matrix
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter number of rows: "); // Take matrix dimensions
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int arr[r][c], brr[r][c], result[r][c];

   printf("\nEnter elements of first matrix (%d x %d):\n", r, c);
    for (int i = 0; i < r; i++) {       // first matrix
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nEnter elements of second matrix (%d x %d):\n", r, c);
    for (int i = 0; i < r; i++) {        // second matrix
        for (int j = 0; j < c; j++) {
            scanf("%d", &brr[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {  // Add matrices
        for (int j = 0; j < c; j++) {
            result[i][j] = arr[i][j] + brr[i][j];
        }
    }
    printf("\nThe sum of the two matrices is:\n");
    for (int i = 0; i < r; i++) {     // Display result
        for (int j = 0; j < c; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
