/// PROGRAM FOR BUBBLE SORT
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

    for(int i = 0; i < n - 1; i++){ // for passes
        int swapped = 0;
     for(int j = 0; j < n - 1 - i; j++){ //swapping
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;   
            }
        }
        if(swapped == 0){ //array is already sorted
         break;
        }
    }
     for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
        return 0;
}
