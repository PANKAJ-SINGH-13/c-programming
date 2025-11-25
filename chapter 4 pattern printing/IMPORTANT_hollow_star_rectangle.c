/*  print the given pattern
  ******
  *    *
  *    *  
  ******               */
  
 #include <stdio.h>

int main() {
    int n = 6;  // pattern size (odd number recommended)
    

    for (int i = 1; i <= 4; i++) {
        
        for (int j = 1; j <= n; j++) {
            
            if (i == 1 || i == 4||j==1|| j==6) {
                printf("*");
            } 
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
