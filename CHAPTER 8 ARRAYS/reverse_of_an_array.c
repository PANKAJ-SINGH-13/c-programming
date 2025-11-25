/// program for writing array in reverse order
#include <stdio.h>

int main() {
    int n;

    // Step 1: Ask the user for the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

  
    int arr[n]; 
    
    for (int i = 0; i < n; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
for (int j = n - 1; j >= 0; j--) {
        printf("%d\n", arr[j]);
    }
    return 0;
}
