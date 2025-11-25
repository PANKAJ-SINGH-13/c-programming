////TAKE POSITIVE FLOAT A as INPUT AND PRINT ITS FRACTIONAL PART

#include<stdio.h>
int main(){
    float a;
    printf("enter your number: ");
    scanf("%f",&a);
    
    int y;
    y=a;
    printf("%f", a-y);
    return 0;
}