////TAKE INPUT PERCENTAGE OF A STUDENT AND PRINT THE GRADE ACCORDING TO THEIR MARKS

/// 75-100 good
/// 50-75 average
/// 0-50 fail


#include<stdio.h>
int main(){
    int a;
    printf("enter your percentage: ");
    scanf("%d",&a);
    
     if (a < 0 || a > 100) {
        printf("Invalid percentage! Please enter a value between 0 and 100.\n");
    }
    
    else if(a>75 && a<=100){
        printf("your grade is good");
    }
    
    else if(a>50 && a<=75){
        printf("your grade is average");
    }
    
   else{
        printf("you have faileed");
    }
    return 0;
}


