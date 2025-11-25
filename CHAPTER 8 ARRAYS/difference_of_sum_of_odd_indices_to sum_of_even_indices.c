// find the difference between the sum of elements at even indices to the sum of eleents at odd indices

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
        if(j%2==0){
            sum_even=sum_even+arr[j];
        }
        else{
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
