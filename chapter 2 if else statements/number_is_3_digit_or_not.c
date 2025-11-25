////TAKE POSITIVE INTEGER AS INPUT AND TELL WHETHER IT IS A THREE DIGIT NUMBER OR NOT

#include<stdio.h> 
int main(){
    
    int l;   
    printf("enter  your number: ");
    scanf("%d",&l);
    
    
    if(l>99 && l<1000){
        printf("you entered a three digit number");
    }
    
    else{
        printf("it is not a three digit number");
    }
    return 0;
    
}