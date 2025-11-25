#include <stdio.h>

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = 5;

    int i, j, key;

    // Insertion Sort
    for (i = 1; i < n; i++) {
        key = arr[i];        // Current number to insert
        j = i - 1;

        // Move bigger numbers to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Place the number in the correct position
        arr[j + 1] = key;
    }

    // Print sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
