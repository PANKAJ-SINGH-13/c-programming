//taking input and giving output without using loops
//// using gets()and puts()


/////method 1

#include <stdio.h>

int main() {
    char str[50];

    fgets(str, sizeof(str), stdin);  // safe input /////// whole sentence will be considered
    puts(str);

    return 0;
}



////method 2


#include <stdio.h>

int main() {
    char str[50];

    scanf("%s",str);     ///////// this prints only the first word of the string 
    printf("%s",str);

    return 0;
}
