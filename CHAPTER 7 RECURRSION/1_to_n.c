// PRINT THE NUMBERS FROM 1 TO n USING RECURSION 

#include <stdio.h>
void series(int x, int n){
    if(x>n) return;        ////BASE CASE 
   
    printf("%d\n",x);

    series(x+1,n);         //// AGAIN FUNCTION CALL
    return;
}


int main() {
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    
    series (1,n);
    
    return 0;
}