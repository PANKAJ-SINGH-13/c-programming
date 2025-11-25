// FIND THE SUM OF THIS SERIES 1-2+3-4+5-6.... UPTO N TERMS

///METHOD 1

#include <stdio.h>

int main() {
    int n, i;
    int sum_odd = 0, sum_even = 0, total;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // loop through 1 to n
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sum_even += i;   // even term → subtract later
        else
            sum_odd += i;    // odd term → add
    }

    total = sum_odd - sum_even;

    printf("Sum of the series = %d\n", total);

    return 0;
}


////METHOD 2

#include <stdio.h>

int main() {
    int n;
     printf("Enter the number of terms: ");
    scanf("%d", &n);

    
    if(n%2==0){
        printf("%d",-n/2);
    }
    else{
        printf("%d",n-((n-1)/2));
    }
   

    return 0;
}