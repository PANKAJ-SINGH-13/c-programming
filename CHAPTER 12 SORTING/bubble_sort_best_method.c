#include <stdio.h>

int main() {
    int n = 5;
    int arr[5] = {5, 4, 3, 2, 1};

    printf("before sorting\n");

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("after bubble sort\n");

    /// BUBBLE SORT WITH EARLY EXIT
    for(int i = 0; i < n - 1; i++){         //// this is for number of passes
        
        int swapped = 0;    // flag added for exit optimization

        for(int j = 0; j < n - 1 - i; j++){ //// this will do swapping
            
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;   // mark that a swap happened
            }
        }

        if(swapped == 0){
            // No swap happened → array is already sorted
            break;
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}
