// DISPLAY THIS GP 1,2,4,8,16.....UPTO N TERMS
/// nth term = ar^(n-1)


#include <stdio.h>
int main() {
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    
    int a=1;
    for(int i=1;i<=n;i++){
        printf("%d,",a);
        a=a*2;
    }
    
    
    return 0;
}