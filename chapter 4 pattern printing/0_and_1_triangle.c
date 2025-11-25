/* print the given pattern
1
01
101
0101                */

#include <stdio.h>

int main() {
    int n;
     printf("enter a number: ");
    scanf("%d",&n);
    
    
    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){

            if(i==1&&j==1|| (i+j)%2==0){
                printf("%d",1);
            }
            else{
                printf("%d",0);
            }
        }
        printf("\n");
        
    }


    return 0;
}