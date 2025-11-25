// given an nXm matrix a, print all elements of the matrix in spiral order          leetcode 54

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

    
    for (int i = 0; i < r; i++) {
        if(i%2==0){
            for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        }
        else{
            for (int j = c-1; j >=0; j--) {
            printf("%d ", arr[i][j]);
        }
        }
        printf("\n");
    }

    return 0;
}
