//
#include <stdio.h>

int main() {
    char str[20]="college wallah";
    int i=0;
    
    while(str[i]!=0){
        printf("%c", i[str]); //// printf("%c",str[i]);   BOTH ARE SAME BOTH CAN BE USED 
        i++;
    }
    return 0;
}



/*IF WE ARE WRITING CHARACTER ARRAY (STRING) IN THE FORMAT WHERE WE ARE WRITING 
EACH AND EVERY CHARCTER INSIDE COTES THERE WE HAVE USE '\0' AT LAST BUT IN THE
 OTHER CASE THE COMPUTER AUTOMATICALLY UNDERSTANDS THAT THE STRING IS OVER NOW*/