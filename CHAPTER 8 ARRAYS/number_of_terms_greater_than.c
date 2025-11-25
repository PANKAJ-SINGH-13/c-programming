///// count the number of elements greater than tha a given number x

#include <stdio.h>

int main() {
    int count=0;
    
    int n;
    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    int x;
    printf("Enter the value for x: ");
    scanf("%d", &x);
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    for (int k = 0; k < n; k++) {
        if(arr[k]>x)
        count++;
        
    }
    
    printf("the total number of terms greater than x in the array are %d",count);
    

   
    return 0;
}
