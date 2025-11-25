
#include <stdio.h>

int main() {
    char str1[50];
    puts("Enter a string: ");

    // This scanf reads a full line (including spaces) until newline
    scanf(" %[^\n]", str1);

    puts(str1);

    int size = 0;
    int i = 0;
    while (str1[i] != '\0') {
        size++;
        i++;
    }

    char str2[size + 1]; // +1 for null terminator

    for (int i = 0; i < size; i++) {
        str2[i] = str1[i];
    }
    str2[size] = '\0'; // add null terminator

    printf("The copied string is %s", str2);

    return 0;
}
