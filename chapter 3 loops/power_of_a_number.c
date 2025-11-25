// WRITE A PROGRAM TO FIND THE POWER OF A NUMBER.

#include <stdio.h>

int main() {
    int n;
    printf("enter your number: ");
    scanf("%d",&n);
    
    int p;
    printf("enter the value of power: ");
    scanf("%d",&p);
    
    int product=1;
    
    for(int i=1;i<=p;i++){
        product = product * n;
    }
    printf("%d",product);
    
    return 0;
}