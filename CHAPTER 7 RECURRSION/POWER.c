// // MAKE A FUNCTION WHICH CALCULATES 'a' RAISED TO THE POWER 'b' USING RECURSION

#include <stdio.h>

int powerfunction(int a, int b){
    if(b==0)
    return 1;
    return a * powerfunction(a, b-1);
}
int main() {
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    
    int p;
    printf("enter the power you want to raise:");
    scanf("%d",&p);
    
    int c=powerfunction(n,p);
    printf("%d raised to the power %d is %d",n,p,c);
    

    return 0;
}
