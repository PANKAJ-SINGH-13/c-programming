// DISPLAY THIS GP 100,50,25.......... UPTO N TERMS 

#include <stdio.h>

int main() {
    float a=100;
    int n;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        printf("%.2f",a);
        if(i != n) {
            printf(", ");
        }
        a=a/2;
    }
    
    return 0;
}