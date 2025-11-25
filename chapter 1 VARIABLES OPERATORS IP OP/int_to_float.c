////TAKE INTEGER A as INPUT AND PRINT HALF OF THE NUMBER 

#include<stdio.h>
int main(){
    int a;
    printf("enter your number: ");
    scanf("%d",&a);
    
    float b=a/2.0;
    printf("the half of %d is %f", a,b);
    return 0;
}