#include <stdio.h>
#include <string.h>

int main() {
    char str[50];

    gets(str);       //// whole sentence will be considered 
    puts(str);      //// this automatically adds a new line 

    return 0;
}
/*⚠️ Important Note:

The function gets() is unsafe and removed from 
the C11 standard, because it does not check buffer size —
 it can easily cause a buffer overflow if the input exceeds 49 characters in this case.*/