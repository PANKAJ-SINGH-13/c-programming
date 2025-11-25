// TAKE 3 NUMBER INPUTS AND TELL IF THEY CAN BE THE SIDES OF A TRIANGLE
#include <stdio.h>

int main() {
    int a;
    printf("enter first side length: ");
    scanf("%d",&a);
    
    int b;
    printf("enter second side length: ");
    scanf("%d",&b);
    
    int c;
    printf("enter third side length: ");
    scanf("%d",&c);
    
    if((a+b)>c && (b+c)>a && (c+a>b)){
        printf("this is a valid triangle");
    }
    else{
        printf("this is not a valid triangle");
    }

    return 0;
}