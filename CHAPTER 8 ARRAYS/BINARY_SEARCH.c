/// program for binary search
#include <stdio.h>

int main() {
    int arr[10] = {2, 5, 7, 9, 12, 15, 18, 21, 25, 30}; 
    int n = 10;  /// ONLY FOR sorted array
    int key;
    int low = 0, high = n - 1;
    int mid;
    int found = 0;

    printf("Enter the number to search: ");
    scanf("%d", &key);

    while (low <= high) {
        mid = (low + high) / 2;   // Find middle index

        if (arr[mid] == key) {    // If key is at mid
            printf("Number found at position %d\n", mid);
            found = 1;
            break;
        }
        else if (key < arr[mid]) {
            high = mid - 1;       // Search in left half
        }
        else 
            low = mid + 1;        // Search in right half       
    }
    if (!found) 
        printf("Number not found in the array.\n");
 return 0;
}
