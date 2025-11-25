#include <stdio.h>    

int main() {          

    int arr[] = {5, 2, 8, 1, 3};  
    int n = 5;  
    printf("Before sorting:\n");
   
    for(int i = 0; i < n; i++)     
    printf("%d ", arr[i]);     
    printf("\n");                 

    for(int i = 0; i < n - 1; i++) { 
        int minIndex = i;   // Assume the current position i has the smallest element

        for(int j = i + 1; j < n; j++) {  // Inner loop: search for the smallest element in the unsorted part

            if(arr[j] < arr[minIndex]) { 
                // If we find a smaller element
                minIndex = j;      
                // Update minIndex to the index of this new smallest element
            }
        }

        // After inner loop, minIndex holds index of smallest element
        int temp = arr[i];         // Swap arr[i] with arr[minIndex]
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("After selection sort:\n");

    for(int i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n");

    return 0;     
}
