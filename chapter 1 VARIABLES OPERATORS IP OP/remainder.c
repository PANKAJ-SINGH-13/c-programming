/////// FIND THE REMAINDER WHEN "A" IS DIVIDED BY "B" GIVEN THAT A IS GREATER THAN B AND TAKE INPUT FROM THE USER AS INTEGER


#include<stdio.h>
int main(){
    int a,b;
    
    printf("enter your first number: ");
    scanf("%d",&a);
    
    printf("enter your first number: ");
    scanf("%d",&b);
    
    int remainder=a%b;
    printf("the remainder when a is divided by b is %d", remainder);
    return 0;
}