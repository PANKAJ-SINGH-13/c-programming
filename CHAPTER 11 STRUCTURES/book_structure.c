#include <stdio.h>
#include <string.h>  // Needed for strcpy()

int main() {
    struct book {
        char name[50];
        float price;
        int no_of_pages;
    } a, b, c;

    // Correct way to assign string to a character array
    strcpy(a.name, "pankaj");

    // Assigning numeric values
    a.price = 234.0;
    a.no_of_pages = 60;

    // Printing the structure values
    printf("Name: %s\n", a.name);
    printf("Price: %.2f\n", a.price);
    printf("Number of pages: %d\n", a.no_of_pages);

    return 0;
}

/*
strcpy(a.name, "pankaj"); correct
a.name = 'pankaj';  // ❌ WRONG

'pankaj' is treated as a single character constant (which is invalid here).

You must use strcpy() to copy a string into a char[].
*/