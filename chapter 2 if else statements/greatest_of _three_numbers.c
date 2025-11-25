// largest among three numbers using nested if else
#include <stdio.h>
int main() {
    int a;
    printf("enter your number: ");
    scanf("%d",&a);
    
    int b;
    printf("enter your number: ");
    scanf("%d",&b);
    
    int c;
    printf("enter your number: ");
    scanf("%d",&c);
    
    if(a>b && a>c){
        printf("%d is the greatest number",a);}
    
    else if(a<b && b>c){
        printf("%d is the greatest number",b);}
    
    else if(a==b && b==c){
        printf("all numbers are equal");}    
    
    else{
        printf("%d is the greatest number",c);}

    return 0;
}