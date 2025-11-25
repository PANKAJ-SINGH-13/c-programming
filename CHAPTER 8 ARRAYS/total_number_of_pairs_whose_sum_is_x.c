/// find the total number of pairs in the array whose sum is equal to the given value x
#include <stdio.h>

int main() {
    int count = 0;
    int n, x;

    printf("Enter the value for n: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    for (int j = 0; j < n; j++) {
        for (int k = j + 1; k < n; k++) {  // start from j+1 to avoid repeats
            if (arr[j] + arr[k] == x) {
                count++;
            }
        }
    }

    printf("\nThe total number of pairs whose sum is equal to %d is: %d\n", x, count);

    return 0;
}
