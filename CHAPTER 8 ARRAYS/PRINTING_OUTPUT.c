//////////CODE FOR TAKING INPUTS FROM USER AND THEN PRINTING THEM USING LOOPS


#include<stdio.h>
int main(){
    int n;
    printf("enter the value for n: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the value at index %d: ",i);
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

    
    return 0;
}