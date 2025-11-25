// WRITE A PROGRAM TO FIND WHETHER A NUMBER IS PRIME OR NOT

#include <stdio.h>

int main() {
    int count=0;
    int n;
    printf("enter your number: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    
    if(count==2){
        printf("you entered a prime number");
    }
    
    else{
        printf("you entered a non prime number means it is a composite number");
    }

    return 0;
}