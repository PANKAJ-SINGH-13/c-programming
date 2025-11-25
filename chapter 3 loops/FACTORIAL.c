//print factorial of a given number

#include <stdio.h>

int main() {
    int n;
    int product=1;
    printf("enter your number: ");
    scanf("%d",&n);
    
    for(int i=1; i<=n;i++){
        product=product*i;
    }
    printf("the factorial of given number is %d", product);

    return 0;
}