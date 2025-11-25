/////// in a grid there are multible boxes 
// maze path (grid problem) n=number of rows and m=number of columns 
/// FIND THE NUMBER OF WAYS BY WHICH 2 MAN AT OPPOSITE CORNERS MEET
//// AT A CORNER GIVEN THAT ONLY ONE PERSON IS MOVING 
//// TAKING ONE STEP AT A TIME 
///// can only move rightways and downways


#include <stdio.h>

int meet(int cr, int cc, int er, int ec) {
    // Base case: reached the destination
    if(cr == er && cc == ec)
        return 1;

    // Out-of-bound check
    if(cr > er || cc > ec)
        return 0;

    // Move right and down recursively
    return meet(cr, cc + 1, er, ec) + meet(cr + 1, cc, er, ec);
}

int main() {
    int n, m, o, p;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("Enter number of columns: ");
    scanf("%d", &m);

    printf("Enter current row: ");
    scanf("%d", &o);

    printf("Enter current column: ");
    scanf("%d", &p);

    printf("Number of ways to reach bottom-right corner: %d\n", meet(o, p, n, m));

    return 0;
}
