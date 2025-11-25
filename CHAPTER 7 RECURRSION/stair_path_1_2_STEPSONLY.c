// FOR A STAIR PATH QUESTION DETERMINE THE NUMBER OF WAYS SO THAT HE REACHES THE TOP THAT IS THE NTH STAIR USING SINGLE AND DOUBLE STEPS ONLY

#include <stdio.h>

int stair(int n){
    if(n==1)       ////// BASE CASE 1
    return 1;
    
    if(n==2)     ////// BASE CASE 2
    return 2;
    
     return  stair(n-1)+stair(n-2);
   
}

int main() {
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    
    printf("%d", stair(n));
    
    return 0;
}