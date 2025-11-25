/* PRINT THE FOLLOWING PATTERN
****
***                                (dereasing star pattern)
**
*                 */  



#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    
    
    
    for (int i = n; i >= 1; i--) {            // outer loop (starts from n down to 1)
        
        for (int j = 1; j <= i; j++) {       // print i stars
            printf("*");
        }
        printf("\n");                        // move to next line
    }
    
}