////// write a program to print the reverse of a number using while loop

#include<stdio.h>
int main(){
    int n;
    printf("Enetr a number: ");
    scanf("%d",&n);

    int d;
    int reverse=0;

    while(n>0){
        d=n%10;
        reverse=reverse*10 + d;
        n=n/10;
    }

    return 0;
}