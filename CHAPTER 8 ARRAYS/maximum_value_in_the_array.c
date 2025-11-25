///// FIND THE MAXIMUM VALUE IN THE ARRAY

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
int max=1;
for(int i=0;i<n;i++){
    if( max < arr[i]){
        max = arr[i];
   }
}
 printf("The maximum value in the array is: %d\n", max);

return 0;
}
