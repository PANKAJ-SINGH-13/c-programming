#include <stdio.h>

int main() {
    char str[100] = "Hello";
    int pos = 2;     // position where we want to insert
    char ch = 'X';   // character to insert

    // Find length of string manually
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Shift characters to the right by 1 from the end to make space
    for (int i = length; i >= pos; i--) {
        str[i + 1] = str[i];
    }

    // Insert the new character
    str[pos] = ch;

    printf("String after insertion: %s\n", str);

    return 0;
}
 