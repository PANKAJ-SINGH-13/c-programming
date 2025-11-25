// WRITE A PROGRAM TO FIND WHETHER A NUMBER INPUT FROM THE USER IS DIVISIBLE BY 5 OR NOT 


#include <stdio.h>

int main() {
    int a;
    printf("enter your number: ");
    scanf("%d",&a);
    
    if(a%5==0){
        printf("your number is divisible by 5");
    }
    
    else
    printf("you number is not divisible by 5");

    return 0;
}