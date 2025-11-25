////TAKE INTEGER AS INPUT AND TELL WHETHER IT IS DIVISIBLE BY 3 OR 5

#include<stdio.h> 
int main(){
    
    int l;   
    printf("enter  your number: ");
    scanf("%d",&l);
    
    
    if(l%5==0 || l%3==0){
        printf("your number is divisible by 5 or 3");
    }
    
    else{
        printf("your number is not divisible by 5 or 3");
    }
    return 0;
    
}








