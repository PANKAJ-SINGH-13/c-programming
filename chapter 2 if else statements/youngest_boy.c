////IF THE AGES OF RAM, SHYAM AND AJAY ARE INPUT THROUGH THE KEYBOARD WRITE A PROGRAM TO DETERMINE THE YOUNGEST OF THE THREE 


#include <stdio.h>

int main() {
    int ram, shyam, ajay;

    printf("Enter Ram's age: ");
    scanf("%d", &ram);

    printf("Enter Shyam's age: ");
    scanf("%d", &shyam);

    printf("Enter Ajay's age: ");
    scanf("%d", &ajay);

    if (ram < shyam && ram < ajay) {
        printf("Ram is the youngest.\n");
    }
    else if (shyam < ram && shyam < ajay) {
        printf("Shyam is the youngest.\n");
    }
    else if (ajay < ram && ajay < shyam) {
        printf("Ajay is the youngest.\n");
    }
    else {
        printf("Two or more have the same (youngest) age.\n");
    }

    return 0;
}
