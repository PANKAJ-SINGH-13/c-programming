/* PRINT THE FOLLOWING PATTERN
1234      (number square)
1234        
1234
1234     */     



#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    
    
    
    for(int i=1;i<=n;i++){
        for(int J=1;J<=n;J++){
            printf("%d",J);
        }
        printf("\n");
        
    }
    
}