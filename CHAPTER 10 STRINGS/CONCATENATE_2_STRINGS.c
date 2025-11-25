//// program to concatenate 2 strings without strcat()
#include <stdio.h>

int main() {
    char str1[200], str2[100];
    int i = 0, j = 0;

    printf("Enter first sentence: ");
    scanf("%[^\n]%*c", str1); 

    printf("Enter second sentence: ");
    scanf("%[^\n]%*c", str2);

    // Move i to the end of str1
    while (str1[i] != '\0') {
        i++;
    }
    // Copy str2 to str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    // End the concatenated string
    str1[i] = '\0';
    printf("Concatenated sentence: %s\n", str1);
    return 0;
}
