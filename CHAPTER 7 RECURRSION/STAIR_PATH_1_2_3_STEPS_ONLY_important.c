// FOR A STAIR PATH QUESTION DETERMINE THE NUMBER OF WAYS SO THAT HE REACHES THE TOP THAT IS THE NTH STAIR USING SINGLE, DOUBLE and triple steps

#include <stdio.h>

int stair(int n){
    if(n==1)       ////// BASE CASE 1
    return 1;
    
    if(n==2)     ////// BASE CASE 2
    return 2;
    
    if(n==3)     ////// BASE CASE 3
    return 4;
    
    
    return  stair(n-1)+stair(n-2)+stair(n-3);
   
}

int main() {
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    
    printf("%d", stair(n));
    
    return 0;
}