// PRINT INCREASING-DECREASING NUMBERS USING RECURSION 


#include <stdio.h>
void series(int n){
    if(n==0) return; /////BASE CASE
   
    printf("%d\n",n);  ///// CODE
    series(n-1);      ///////CALL
     printf("%d\n",n);  ///// CODE
    return;
}


int main() {
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    
    series (n);
    
    return 0;
}