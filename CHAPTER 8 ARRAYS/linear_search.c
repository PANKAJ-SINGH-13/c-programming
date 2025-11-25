//PROGRAM TO SEARCH AN ELEMENT IN THE ARRAY LINEAR SEARCH
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter the value for x: ");
    scanf("%d", &x);

    int found = 0; 

    // Search for x in the array
    for (int j = 0; j < n; j++) {
        if (arr[j] == x) {
            printf("Yes, the number %d is present at index %d\n", x, j);
            found = 1; // mark as found
            //////////WE CAN USE BREAK STATEMENT HERE TO FINISH WHENEVER WE GET 1 VALUE
        }
    }
    if (found == 0) {
        printf("No, the number %d is not present in the array.\n", x);
    }
  return 0;
}
