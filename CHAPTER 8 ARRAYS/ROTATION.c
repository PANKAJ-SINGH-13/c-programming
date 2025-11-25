//ROTATE A GIVEN ARRAY A OF SIZE N BY K STEPS WHERE K IS NON NEGATIVE 
/// K CAN BE GREATER THAN N
#include <stdio.h>

int main() {
    int N, K;

    // Step 1: Get array size
    printf("Enter the size of the array (N): ");
    scanf("%d", &N);

    int A[N];

    // Step 2: Get array elements
    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Step 3: Get rotation value
    printf("Enter number of steps to rotate (K): ");
    scanf("%d", &K);

    // Step 4: Handle K greater than N
    K = K % N;  // Rotating by N or its multiples gives same array

    // Step 5: Create a temporary array to store rotated values
    int rotated[N];

    // Step 6: Copy last K elements to the beginning of rotated array
    for (int i = 0; i < K; i++) {
        rotated[i] = A[N - K + i];
    }

    // Step 7: Copy the remaining elements
    for (int i = K; i < N; i++) {
        rotated[i] = A[i - K];
    }

    // Step 8: Print the rotated array
    printf("Rotated array:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}
