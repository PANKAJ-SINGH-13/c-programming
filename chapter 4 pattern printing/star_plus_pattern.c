/*  print the given pattern
  *
  *
*****
  *  
  *         */
  
 #include <stdio.h>

int main() {
    int n = 5;  // pattern size (odd number recommended)
    int mid = n / 2 + 1; // middle row/column

    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n; j++) {
            
            if (i == mid || j == mid) {
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
