// PRINT TABLE OF n USING LOOPS

#include <stdio.h>
int main() {
    int n;
    printf("enter your number: ");
    scanf("%d",&n);
    
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n", n,i,2*i);
    }
 return 0;
}