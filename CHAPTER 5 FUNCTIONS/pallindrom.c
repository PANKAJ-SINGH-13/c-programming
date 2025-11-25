// A NUMBER IS PALLINDROM OR NOT USING FUNCTIONS 


#include <stdio.h>

int isPalindrome(int n) {
    int original = n, reversed = 0, remainder;
    
    while (n != 0) {
        remainder = n % 10;           // get last digit
        reversed = reversed * 10 + remainder; // build reversed number
        n = n / 10;                   // remove last digit
    }
    
    if (original == reversed)
        return 1; // palindrome
    else
        return 0; // not palindrome
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(isPalindrome(num))
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);

    return 0;
}



/////////METHOD 2

// A NUMBER IS PALLINDROM OR NOT USING FUNCTIONS 


#include <stdio.h>

int isPalindrome(int n) {
    int original = n, reversed = 0, remainder;
    
    while (n != 0) {
        remainder = n % 10;           // get last digit
        reversed = reversed * 10 + remainder; // build reversed number
        n = n / 10;                   // remove last digit
    }
    
    if (original == reversed)
        printf("%d is a palindrome number.\n", original);        //// HERE WE HAVE NOT WRITTEN n INSTEAD WE HAVE WRITTEN ORIGINAL BECAUSE AT LAST THE VALUE OF n BECOMES 0.
    else
         printf("%d is not a palindrome number.\n", original);

}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    isPalindrome(num);
       
    
}


