/*Problem Statement:
Write a C program to:

Take an integer n and an array of n integers as input.

Compute the sum of all elements at even indices and subtract the sum of all elements at odd indices.

But this time, only include positive numbers in the sums (ignore negatives).

Finally, print the difference (even-index sum − odd-index sum).*/

#include <stdio.h>

int main() {
    int sum_odd=0;
    int sum_even=0;
    int difference;
    
    int n;
    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    for (int j = 0; j < n; j++){
        if(j%2==0 && arr[j]>0){
            sum_even=sum_even+arr[j];
        }
        else if(j%2!=0 && arr[j]>0){
            sum_odd=sum_odd+arr[j];
        }
    }
    difference=sum_even-sum_odd;
    
    if(difference>0){
        printf("the difference is %d",difference);
    }
    
    else{
        printf("the difference is %d",-difference);
    }

    return 0;
}
