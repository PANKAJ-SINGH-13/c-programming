/* PRINT THE FOLLOWING PATTERN
*****       (FILLED STAR RECTANGLE)
*****         
***** */     

///// USING PLAIN LOOP

#include <stdio.h>

int main() {
    
    for(int i=1;i<=3;i++){
        printf("*****\n");
    }
    return 0;
}



/////USING NESTED LOOP

#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=5;i++){
            printf("*");
        }
        printf("\n");
        
    }
    
}