#include<stdio.h>
int swap(int a , int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: %d %d\n", a, b);
}
int main(){
    int c;
    printf("enter your first number: ");
    scanf("%d",&c);
    
    int e;
    printf("enter your second number: ");
    scanf("%d",&e);
    
    swap (c,e);
    
   


    return 0;
}

///// METHOD 2 WITHOUT USING THIRD VARIABLE
////        A=A+B      B=A-B     A=A-B 