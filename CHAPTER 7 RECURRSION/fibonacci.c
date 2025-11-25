// WRITE A FUNCTION TO CALCULATE THE NTH FIBONACCI NUMBER USING RECURSION 

#include <stdio.h>
int fibo(int n){
    if(n==1||n==2)
    return 1;
    
    return fibo(n-1) + fibo(n-2);
}

int main() {
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    
    int c=fibo(n);
    printf("the %d term of fibonacci series is %d",n,c);
    

    return 0;
}