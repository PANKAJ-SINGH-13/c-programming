////////// SIZE OF A STRING WITHOUT USING INBUILT FUNCTIONS
////// HERE WE ARE USING LOOPS
// 
#include <stdio.h>
#include<stdio.h>

int main() {
    char str[50];
    puts("enter a string: ");
    gets(str);       ////////// in some compiler it does not work so we us fgets
    puts(str);
    
    int size=0;
    int i=0;
    while(str[i]!='\0'){
        size++;
        i++;
        
    }
    printf("%d",size);
    

    return 0;
}