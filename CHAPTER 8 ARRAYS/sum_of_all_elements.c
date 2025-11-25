/////calculate the sum of all elements of an array 

#include<stdio.h>
int main(){
    int n;
    int sum=0;

    printf("enter the value for n: ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        printf("enter the value at index %d: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
       sum=sum+arr[i];
    }

    printf("The sum of all elements of the array is %d",sum);
    return 0;
}