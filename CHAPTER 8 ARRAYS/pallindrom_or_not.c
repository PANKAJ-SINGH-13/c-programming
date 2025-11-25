// if an array contains n elements then find whether it is a pallindrom.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value for n: ");
    scanf("%d", &n);

    int arr[n];

    // Step 1: Taking input for the array
    for (int i = 0; i < n; i++) {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Step 2: Checking if the array is a palindrome
    int isPalindrome = 1;  // assume it's a palindrome initially

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            isPalindrome = 0;  // found a mismatch
            break;             // no need to check further
        }
    }

    // Step 3: Printing the result
    if (isPalindrome)
        printf("The array is a palindrome.\n");
    else
        printf("The array is not a palindrome.\n");

    return 0;
}
