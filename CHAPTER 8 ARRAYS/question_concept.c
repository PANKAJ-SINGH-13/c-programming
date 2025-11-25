// given an array of integers change the value of all odd indexed elements to its second multiple and increment
//// all even indexed value by 10.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Process array based on index parity
    for (int j = 0; j < n; j++) {
        if (j % 2 == 0) {
            // even index → increment by 10
            arr[j] = arr[j] + 10;
        } else {
            // odd index → multiply by 2
            arr[j] = arr[j] * 2;
        }
    }
    
    // Print the result
    printf("\nModified array:\n");
    for (int k = 0; k < n; k++) {
        printf("%d\n", arr[k]);
    }

    return 0;
}
