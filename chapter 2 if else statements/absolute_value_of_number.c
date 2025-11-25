// WRITE A PROGRAM TO FIND THE ABSOLUTE VALUE OF A NUMBER |X| (MOD X)


#include <stdio.h>

int main() {
    int a;
    printf("enter your number: ");
    scanf("%d",&a);
    
    if(a>=0){
        printf("The absolute value of the number is %d",a);
    }
    
    else
    printf("The absolute value of the number is %d", -a);

    return 0;
}