// WRITE A C PROGRAM USING FUNCTIONS TO ADD 2 NUMBERS


#include <stdio.h>

void sum(int a, int b){
    printf("the sum of numbers is %d",a+b);
}
int main() {
    int c;
    printf("enter your first number: ");
    scanf("%d",&c);
    
    int e;
    printf("enter your second number: ");
    scanf("%d",&e);
    
    sum(c,e);
    
    

    return 0;
}