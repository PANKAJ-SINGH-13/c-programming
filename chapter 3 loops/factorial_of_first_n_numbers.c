//print factorial of first n numbers using single loop


#include <stdio.h>

int main() {
    int n;
    int product=1;
    printf("enter your number: ");
    scanf("%d",&n);
    
    for(int i=1; i<=n;i++){
        product=product*i;
           printf("the factorial of %d is %d\n", i,product);
    }
 

    return 0;
}
