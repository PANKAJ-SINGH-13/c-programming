// IF THE COST PRICE AND SELLING PRICE OF AN ITEM IS INPUT THROUGH THE KEYBOARD, WRITE A PROGRAM TO DETERMINE WHETHER A SELLER HAS MADE PROFIT OR LOSS. ALSO DETERMINE HOW MUCH PROFIT HE MADE OR LOSS HE MADE 


#include <stdio.h>

int main() {
    float c;    /// COST PRICE
    printf("enter cost price: ");
    scanf("%f",&c);
    
    float s;     /// SELLING PRICE
    printf("enter selling price: ");
    scanf("%f",&s);
    
    
    if(s>c){
        printf("The seller has made a profit of %f",s-c);
    }
    
    else if(s==c){
        printf("no profit no loss");
    }
    
    else
    printf("The seller has made a loss of %f", c-s);

    return 0;
}