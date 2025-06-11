#include <stdio.h>

int main() {
    // A simple calculator program in C
    char operation;
    double num1, num2, result;

    // Displaying the menu
    printf("Simple Calculator\n");
    printf("Choose an operation:\n");
    printf(" + : Addition\n");
    printf(" - : Subtraction\n");   
    printf(" * : Multiplication\n");
    printf(" / : Division\n");
    printf("Enter your choice (+, -, *, /): ");
    scanf(" %c", &operation); // Read the operation and ignore leading whitespace
    printf("Enter first number: ");
    scanf("%lf", &num1); // Read the first number
    printf("Enter second number: ");
    scanf("%lf", &num2); // Read the second number 

    // Perform the operation based on user input
    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operation! Please choose +, -, *, or /.\n");
    }

    // End of the program
    return 0;
}