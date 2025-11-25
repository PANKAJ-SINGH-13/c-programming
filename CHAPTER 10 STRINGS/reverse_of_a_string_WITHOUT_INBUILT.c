//////////// to reverse a string we first need to find its size if we dint know 
//// then we have to use the for loop and just inter change using a third string called "temp"

/// reverse of a string without strrev()
#include <stdio.h>

int main() {
    char str[50];
    puts("enter a string: ");
    gets(str);  //CAUTION
    
    int size=0;
    int i=0;
    while(str[i]!='\0'){
        size++;
        i++;     
    }
   for(int i=0,j=size-1;i<=j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("the reverse string is:");
    puts(str);
        return 0;
}


