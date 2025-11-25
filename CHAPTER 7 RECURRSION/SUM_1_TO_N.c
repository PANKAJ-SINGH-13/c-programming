// PRINT THE SUM OF THE SERIES FROM 1 TO N USING RECURSION
#include <stdio.h>

int sum(int n){
    if(n==1) ///////BASE CONDITION
    return 1;
    
    return n+sum(n-1); //////RECURSIVE CALL
    
}

int main() {
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    
    int b=sum(a);
    printf("the sum of series is %d",b);

    return 0;
}