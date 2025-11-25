/////calculate the product of all elements of an array 

#include<stdio.h>
int main(){
    int n;
    int product=1;

    printf("enter the value for n: ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        printf("enter the value at index %d: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
       product=product*arr[i];
    }

    printf("The product of all elements of the array is %d",product);
    return 0;
}