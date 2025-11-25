// print greeting n times using recursion 

#include <stdio.h>

void greet(int n){
    if(n==0){    ////BASE CONDITION
        return;
    }
    printf("greetings\n");
    greet(n-1);
    return;
}

int main() {
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    
    greet (n);
    
    return 0;
}