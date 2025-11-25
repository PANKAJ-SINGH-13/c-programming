// write a program to store roll number and marks obtained by 4 students in pcm in matrix form.

#include <stdio.h>

int main() {
    int r = 4, c = 4;
    int arr[r][c];

    // Input data for each student
    for (int i = 0; i < r; i++) {
        printf("\n--- Enter details for student %d ---\n", i + 1);
        printf("Enter roll number: ");
        scanf("%d", &arr[i][0]);

        printf("Enter marks in Physics: ");
        scanf("%d", &arr[i][1]);

        printf("Enter marks in Chemistry: ");
        scanf("%d", &arr[i][2]);

        printf("Enter marks in Maths: ");
        scanf("%d", &arr[i][3]);
    }

    // Display data in matrix form
    printf("\nRoll No\tPhysics\tChemistry\tMaths\n");
    printf("----------------------------------------\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
