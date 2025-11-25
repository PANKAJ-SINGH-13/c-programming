/// WRITE A C PROGRAM TO PRINT PERCENTAGE OF 5 NUMBERS 

#include <stdio.h>

int main() {
   int maths =45;
   int physics=56;
   int chemistry=67;
   int biology=78;
   int english=90;
   
   int percentage =(maths+physics+chemistry+biology+english)/5;
   
   printf("%d", percentage);
return 0;
}