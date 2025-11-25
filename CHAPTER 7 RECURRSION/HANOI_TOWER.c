// TOWER OF HANOI 
// IF THERE ARE 4 DISCS THEN THE MINIMUM NUMBER OF WAYS WOULD BE 2^4-1
/// RODS ARE ALWAYS 3 BUT THE NUMBER OF DISCS CHANGES
// IT IS JUST LIKE PRE IN POST
/// THERE ARE THREE RODS SOURCE ROD, HELPING ROD AND DESTINATION ROD 
/// MOVE A TO B THE SMALL PYRAMID        
/// THEN MOVE A TO C THE LARGEST DISC THE B TO C MOVING THE SMALL PYRAMID 

#include <stdio.h>

// Function to count the total number of moves recursively
long long tower(int n, char s, char h, char d)  // source, helper, destination
{
    if (n == 0) 
        return 0;  // base case — no moves if no discs

    // Step 1: Move (n-1) discs from source → helper
    long long moves1 = tower(n - 1, s, d, h);

    // Step 2: Move the largest disc from source → destination (1 move)
    long long currentMove = 1;

    // Step 3: Move (n-1) discs from helper → destination
    long long moves2 = tower(n - 1, h, s, d);

    // Total moves for n discs = moves of smaller stack + current move + moves after
    return moves1 + currentMove + moves2;
}

int main() {
    int n;
    printf("Enter number of DISCS: ");
    scanf("%d", &n);

    long long totalMoves = tower(n, 'A', 'B', 'C');
    printf("Minimum number of steps required: %lld\n", totalMoves);

    return 0;
}

