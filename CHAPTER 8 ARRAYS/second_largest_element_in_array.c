/// program for second largest element in the array
#include <stdio.h>

int main() {
    int n;

    // Step 1: Ask the user for the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Step 2: Check if the array has at least 2 elements
    if (n < 2) {
        printf("Array must have at least 2 elements.\n");
        return 0; // Exit the program
    }

    int arr[n]; // Step 3: Declare an array of size n

    // Step 4: Read elements into the array
    for (int i = 0; i < n; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Step 5: Initialize largest and second largest
    int largest, second_largest;

    if (arr[0] > arr[1]) {
        largest = arr[0];
        second_largest = arr[1];
    } else {
        largest = arr[1];
        second_largest = arr[0];
    }

    // Step 6: Traverse the rest of the array
    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            // Current element is new largest
            second_largest = largest; // Previous largest becomes second largest
            largest = arr[i];         // Update largest
        } else if (arr[i] > second_largest && arr[i] != largest) {
            // Current element is between largest and second largest
            second_largest = arr[i];
        }
    }

    // Step 7: Print the second largest element
    printf("The second largest element is: %d\n", second_largest);

    return 0;
}
