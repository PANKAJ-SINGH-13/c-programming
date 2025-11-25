// FACTORIAL OF A GIVEN NUMBER USING FUNCTIONS(call by value) 

#include <stdio.h>
int fac(int a){
    int p=1;

for(int i=1; i<=a;i++){
    p=p*i;
}
printf("The factorial of the given number is %d",p);
}

int main() {
    int n;
    printf("enter your number: ");
    scanf("%d",&n);
    
    fac(n);
    return 0;
}
