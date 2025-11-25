/////// FIND SUM OF 2 NUMBERS AND TAKE INPUT FROM THE USER


#include<stdio.h>
int main(){
    float a,b,sum;
    
    printf("enter your first number: ");
    scanf("%f",&a);
    
    printf("enter your first number: ");
    scanf("%f",&b);
    
    sum=a+b;
    printf("the sum of a and b is %f", sum);
    return 0;
}