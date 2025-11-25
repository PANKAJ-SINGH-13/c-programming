// WRITE A PROGRAM TO FIND A NUMBER IS ODD OR EVEN 

#include <stdio.h>
int main() {
    int a;
    printf("enter your number: ");
    scanf("%d",&a);
    
    if(a%2==0){
        printf("you entered an even number");}
    
    else
    printf("you entered an odd number");
return 0;
}