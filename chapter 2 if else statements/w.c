/////write a program using switch case to perform basic arithematic operations
#include <stdio.h>
int main() {
    char op;        // Operator (+, -, *, /)
    int num1, num2; // Integer operands

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op); // Space before %c to ignore newline

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    switch (op) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
default:
         printf("Error: Invalid operator.\n");
}
return 0;
}
