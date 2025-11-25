// DISPLAY THIS AP UPTO ALL POSITIVE TERMS 100,97,94....
/// nth term = a+(n-1)*d


#include <stdio.h>

int main() {
    int a = 100;  // First term
    int d = -3;   // Common difference

    for(int term = a; term > 0; term += d) {
        printf("%d", term);
        if(term + d > 0) {
            printf(", ");
        }
    }

    return 0;
}
